#include "gservo.h"

#include "debug.h"

#define MAX(A, B) (A > B ? A : B)
#define MIN(A, B) (A < B ? A : B)

GServo::GServo(int _pin, int _lowerLimit, int _upperLimit) {
  pin = _pin;
  lowerLimit = MAX(_lowerLimit, SERVO_MIN);
  upperLimit = MIN(_upperLimit, SERVO_MAX);
}

GServo::~GServo() = default;

void GServo::init() {
  servo.attach(pin, PIN_MIN, PIN_MAX);

  if (isnan(midPoint)) {
    midPoint = (upperLimit + lowerLimit) / 2;
  }

  servo.write(midPoint);
}

void GServo::setUpperLimit(int8_t limit) { upperLimit = MIN(limit, SERVO_MAX); }

void GServo::setLowerLimit(int8_t limit) { lowerLimit = MAX(limit, SERVO_MIN); }

void GServo::setPosition(int8_t value) { servo.write(clampValue(value)); }

void GServo::setPositionMap(int8_t value) { servo.write(mapValue(value)); }

int8_t GServo::mapValue(int8_t value) {
  if (MAP_MIN > value || value > MAP_MAX) {
    //   Comment as we ideally should not be mapping beyond these limits. (Will
    //   be clipped).
    DEBUG_MSG_F(1, "Clamped value %d to fit between mapping limits [%d, %d]\n",
                value, lowerLimit, upperLimit);
  }

  return map(value, MAP_MIN, MAP_MAX, lowerLimit, upperLimit);
}

int8_t GServo::clampValue(int8_t value) {
  int8_t clamped = MIN(MAX(value, lowerLimit), upperLimit);

  if (value != clamped) {
    //   Comment as we ideally shouldn't be clamping.
    DEBUG_MSG_F(1, "Clamped value from %d to %d with limits [%d, %d]\n", value,
                clamped, lowerLimit, upperLimit);
  }

  return clamped;
}
