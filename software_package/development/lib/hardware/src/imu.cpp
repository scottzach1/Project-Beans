
#include "imu.h"

Imu::Imu() = default;
Imu::~Imu() = default;

void Imu::init() {
  while (!mpu.begin()) delay(10);

  Serial.println("MPU6050 Found!");

  mpu.setAccelerometerRange(MPU6050_RANGE_16_G);

  Serial.print("Accelerometer range set to: ");
  switch (mpu.getAccelerometerRange()) {
    case MPU6050_RANGE_2_G:
      Serial.println("+-2G");
      break;
    case MPU6050_RANGE_4_G:
      Serial.println("+-4G");
      break;
    case MPU6050_RANGE_8_G:
      Serial.println("+-8G");
      break;
    case MPU6050_RANGE_16_G:
      Serial.println("+-16G");
      break;
  }

  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  Serial.print("Gyro range set to: ");
  switch (mpu.getGyroRange()) {
    case MPU6050_RANGE_250_DEG:
      Serial.println("+- 250 deg/s");
      break;
    case MPU6050_RANGE_500_DEG:
      Serial.println("+- 500 deg/s");
      break;
    case MPU6050_RANGE_1000_DEG:
      Serial.println("+- 1000 deg/s");
      break;
    case MPU6050_RANGE_2000_DEG:
      Serial.println("+- 2000 deg/s");
      break;
  }

  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);
  Serial.print("Filter bandwidth set to: ");
  switch (mpu.getFilterBandwidth()) {
    case MPU6050_BAND_260_HZ:
      Serial.println("260 Hz");
      break;
    case MPU6050_BAND_184_HZ:
      Serial.println("184 Hz");
      break;
    case MPU6050_BAND_94_HZ:
      Serial.println("94 Hz");
      break;
    case MPU6050_BAND_44_HZ:
      Serial.println("44 Hz");
      break;
    case MPU6050_BAND_21_HZ:
      Serial.println("21 Hz");
      break;
    case MPU6050_BAND_10_HZ:
      Serial.println("10 Hz");
      break;
    case MPU6050_BAND_5_HZ:
      Serial.println("5 Hz");
      break;
  }

  Serial.println("");

  delay(100);
}

void Imu::update() { mpu.getEvent(&a, &g, &temp); }

float Imu::read_accl_x() {
  // Serial.printf("Acceleration X: %s m/s^2\n",
  //               String(a.acceleration.x).c_str());
  return a.acceleration.x;
}

float Imu::read_accl_y() {
  // Serial.printf("Acceleration Y: %s m/s^2\n",
  //               String(a.acceleration.y).c_str());
  return a.acceleration.y;
}

float Imu::read_accl_z() {
  // Serial.printf("Acceleration Z: %s m/s^2\n",
  //               String(a.acceleration.z).c_str());
  return a.acceleration.z;
}

sensors_vec_t Imu::read_accl() {
  // Serial.printf(
  //     "Acceleration: {%s, %s, %s} m/s^2\n", String(a.acceleration.x).c_str(),
  //     String(a.acceleration.y).c_str(), String(a.acceleration.z).c_str());
  return a.acceleration;
}

float Imu::read_gyro_x() {
  // Serial.printf("Rotation X: %s rad/s\n", String(g.gyro.x).c_str());
  return g.gyro.x;
}

float Imu::read_gyro_y() {
  // Serial.printf("Rotation Y: %s rad/s\n", String(g.gyro.y).c_str());
  return g.gyro.y;
}

float Imu::read_gyro_z() {
  // Serial.printf("Rotation Z: %s rad/s\n", String(g.gyro.z).c_str());
  return g.gyro.z;
}

sensors_vec_t Imu::read_gyro() {
  // Serial.printf("Gyro: {%s, %s, %s} rad/s.\n", String(gyro.x).c_str(),
  //               String(gyro.y).c_str(), String(gyro.z).c_str());
  return g.gyro;
}
