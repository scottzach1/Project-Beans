#include "imu.h"

#include "debug.h"

Imu::Imu() = default;
Imu::~Imu() = default;

void Imu::init() {
// join I2C bus (I2Cdev library doesn't do this automatically)
#if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
  Wire.begin();
  Wire.setClock(400000);  // 400kHz I2C clock. Comment this line if having
                          // compilation difficulties
#elif I2CDEV_IMPLEMENTATION == I2CDEV_BUILTIN_FASTWIRE
  Fastwire::setup(400, true);
#endif

  // initialize serial communication
  // (115200 chosen because it is required for Teapot Demo output, but it's
  // really up to you depending on your project)
  Serial.begin(115200);
  while (!Serial) {
    // wait for Leonardo enumeration, others continue immediately
    continue;
  }

  // NOTE: 8MHz or slower host processors, like the Teensy @ 3.3V or Arduino
  // Pro Mini running at 3.3V, cannot handle this baud rate reliably due to
  // the baud timing being too misaligned with processor ticks. You must use
  // 38400 or slower in these cases, or use some kind of external separate
  // crystal solution for the UART timer.

  // initialize device.
  DEBUG_MSG_LN(1, F("Initializing I2C devices..."));
  mpu.initialize();
  pinMode(INTERRUPT_PIN, INPUT);

  // verify connection.
  if (DEBUG > 1) {
    Serial.println(F("Testing device connections..."));
    Serial.println(mpu.testConnection() ? F("MPU6050 connection successful")
                                        : F("MPU6050 connection failed"));
  }
  // wait for ready serial input (optional)
  //   Serial.println(F("\nSend any character to begin DMP programming:"));
  //   while (Serial.available() && Serial.read()) {
  //     continue;  // empty buffer
  //   }

  //   while (!Serial.available()) {
  //     continue;  // wait for data
  //   }

  //   while (Serial.available() && Serial.read()) {
  //     continue;  // empty buffer again
  //   }

  // load and configure the DMP
  if (DEBUG > 1) {
    Serial.println(F("Initializing DMP..."));
  }
  devStatus = mpu.dmpInitialize();

  // supply your own gyro offsets here, scaled for min sensitivity
  mpu.setXGyroOffset(220);
  mpu.setYGyroOffset(76);
  mpu.setZGyroOffset(-85);
  mpu.setZAccelOffset(1788);  // 1688 factory default for my test chip

  // make sure it worked (returns 0 if so)
  if (devStatus == 0) {
    // Calibration Time: generate offsets and calibrate our MPU6050
    mpu.CalibrateAccel(6);
    mpu.CalibrateGyro(6);
    mpu.PrintActiveOffsets();
    // turn on the DMP, now that it's ready
    Serial.println(F("Enabling DMP..."));
    mpu.setDMPEnabled(true);

    // enable Arduino interrupt detection
    Serial.print(
        F("Enabling interrupt detection (Arduino external interrupt "));
    Serial.print(digitalPinToInterrupt(INTERRUPT_PIN));
    Serial.println(F(")..."));
    attachInterrupt(digitalPinToInterrupt(INTERRUPT_PIN), dmpDataReady, RISING);
    mpuIntStatus = mpu.getIntStatus();

    // set our DMP Ready flag so the main loop() function knows it's okay to
    // use it
    Serial.println(F("DMP ready! Waiting for first interrupt..."));
    dmpReady = true;

    // get expected DMP packet size for later comparison
    packetSize = mpu.dmpGetFIFOPacketSize();
  } else {
    // ERROR!
    // 1 = initial memory load failed
    // 2 = DMP configuration updates failed
    // (if it's going to break, usually the code will be 1)
    if (DEBUG > 1) {
      Serial.print(F("DMP Initialization failed (code "));
      Serial.print(devStatus);
      Serial.println(F(")"));
    }
  }

  // configure LED for output
  pinMode(LED_PIN, OUTPUT);
}

void Imu::update() {
  // if programming failed, don't try to do anything
  if (!dmpReady) return;
  // read a packet from FIFO
  if (!mpu.dmpGetCurrentFIFOPacket(fifoBuffer)) return;

  // get latest reading.
  mpu.dmpGetQuaternion(&q, fifoBuffer);

  if (DEBUG > 1) {
    // display quaternion values in easy matrix form: w x y z
    Serial.print("quat (wxyz)\t");
    Serial.print(q.w);
    Serial.print("\t");
    Serial.print(q.x);
    Serial.print("\t");
    Serial.print(q.y);
    Serial.print("\t");
    Serial.println(q.z);
  }

  // blink LED to indicate activity
  blinkState = !blinkState;
  digitalWrite(LED_PIN, blinkState);
}

float Imu::read_quat_w() { return q.w; }
float Imu::read_quat_x() { return q.x; }
float Imu::read_quat_y() { return q.y; }
float Imu::read_quat_z() { return q.z; }
Quaternion Imu::read_quat() { return q; }
