#ifndef LIB_HARDWARE_SRC_GSERVO_H_
#define LIB_HARDWARE_SRC_GSERVO_H_

#include <Arduino.h>
// Sadly since PIO update, this is broken on some devices!
#include <Servo.h>

#include <limits>

#define PIN_MIN 1000
#define PIN_MAX 2500

#define MAP_MIN 0
#define MAP_MAX 100

#define SERVO_MIN 0
#define SERVO_MAX 180

/*
 * Class responsible for abstracting some of the complexity around servos with
 * Arduino. This class is aptly named `GServo` as the library that we are
 * utilising already uses this name, and part of our design decisions were to
 * avoid the use of namespaces with unique names.
 */
class GServo {
 private:
  int pin;
  Servo servo;
  /*
   * Restricts the value to between the upper and lower bounds (if present).
   */
  int8_t clampValue(int8_t value);

  /*
   * Maps the value proportionally from between `MAP_MIN` and `MAP_MAX` to a
   * value between upperLimit and lowerLimit.
   */
  int8_t mapValue(int8_t value);

 public:
  int upperLimit;
  int lowerLimit;
  int midPoint = std::numeric_limits<int8_t>::signaling_NaN();

  /*
   * Construct new servo with specified pin value, and upper / lower limits.
   * If the limits exceed the boundaries of the library, they will be clipped
   * to the limits of the servo.
   *
   * Note: For most rocket gimbals, it is unlikely you should want to approach
   * anywhere near these values!
   */
  explicit GServo(int _pin, int _lowerLimit, int _upperLimit);

  /**
   * Constructor
   */
  ~GServo();

  /*
   * Initailises the servo wrapper by attaching to the specified port, and
   * writing to the middle value. This should be called within the `setup()`
   * function of the main file.
   */
  void init();

  /*
   * Restricts the upper limit value the servo can write to.
   *
   * Note: This will be hard clipped to the max value the servo can read.
   */
  void setUpperLimit(int8_t limit);

  /*
   * Restricts the lower limit value the servo can write to.
   *
   * Note: This will be hard clipped to the min value the servo can read.
   */
  void setLowerLimit(int8_t limit);

  /*
   * Sets the middle position of the sero. This is optional, and if not set then
   * the midpoint between the upper and lower limit will be chosen instead.
   *
   * Note: Currently this value is only used to set the initial position
   * of the gimbal during `setup()`.
   */
  void setMiddlePosition(int8_t value);

  /*
   * Sets the position to a new value within the upper and lower limits.
   *
   * Note: The value will clamped if it exceeds these limits.
   */
  void setPosition(int8_t value);

  /*
   * Sets the position of the servo from a value [`MAP_MIN`, `MAP_MAX`] to a
   * value mapped proportionally between the `upperLimit` and `lowerLimit`.
   */
  void setPositionMap(int8_t value);
};

#endif  // LIB_HARDWARE_SRC_GSERVO_H_
