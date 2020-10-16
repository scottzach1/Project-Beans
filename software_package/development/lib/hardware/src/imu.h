#ifndef LIB_HARDWARE_SRC_IMU_H_
#define LIB_HARDWARE_SRC_IMU_H_

#include <Arduino.h>

#include "I2Cdev.h"
#include "MPU6050_6Axis_MotionApps20.h"

// Arduino Wire library is required if I2Cdev I2CDEV_ARDUINO_WIRE implementation
// is used in I2Cdev.h
#if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
#include "Wire.h"
#endif

#define INTERRUPT_PIN 2  // use pin 2 on Arduino Uno & most boards
#define LED_PIN 13       // (Arduino is 13, Teensy is 11, Teensy++ is 6)

/*
 * Interrupt detection;
 */
// indicates whether MPU interrupt pin has gone high
volatile bool mpuInterrupt = false;
void dmpDataReady() { mpuInterrupt = true; }

/**
 *Library which handles interactions with the Imu.
 **/
class Imu {
 private:
  MPU6050 mpu;

  bool blinkState = false;

  /* MPU control/status vars */

  // set true if DMP init was successful
  bool dmpReady = false;

  // holds actual interrupt status byte from MPU
  uint8_t mpuIntStatus;

  // return status after each device operation (0 = success, !0 = error)
  uint8_t devStatus;

  // expected DMP packet size (default is 42 bytes)
  uint16_t packetSize;

  // count of all bytes currently in FIFO
  uint16_t fifoCount;

  // FIFO storage buffer
  uint8_t fifoBuffer[64];

  // orientation/motion vars [w, x, y, z], (quaternion container).
  Quaternion q;

 public:
  /*
   * Constructor
   */
  Imu();

  /*
   * Destructor
   */
  ~Imu();

  /*
   * Initialise the IMU object. Should be called within the `setup()` function
   * of the main file.
   */
  void init();

  /*
   * Updates the sensor reading by polling the IMU.
   */
  void update();

  /*
   * Gets the orientation of the w axis using quaternions.
   */
  float read_quat_w();

  /*
   * Gets the orientation of the x axis using quaternions.
   */
  float read_quat_x();

  /*
   * Gets the orientation of the y axis using quaternions.
   */
  float read_quat_y();

  /*
   * Gets the orientation of the z axis using quaternions.
   */
  float read_quat_z();

  /*
   * Gets the latest quaterion reading.
   */
  Quaternion read_quat();
};

#endif  // LIB_HARDWARE_SRC_IMU_H_
