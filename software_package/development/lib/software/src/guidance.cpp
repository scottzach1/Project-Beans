#include "guidance.h"

GuidanceSystem::GuidanceSystem() {
  servoTop = new GServo(A3, 6, 90);
  servoBot = new GServo(A2, 35, 85);
}

GuidanceSystem::~GuidanceSystem() {
  delete servoTop;
  delete servoBot;
}

void GuidanceSystem::init() {
  imu.init();
  servoBot->init();
  servoTop->init();
}

void GuidanceSystem::step() {
  imu.update();

  float botQuat = imu.read_quat_y();
  float topQuat = imu.read_quat_x();

  // Initial Readings (map to -50, 150).
  // [-1, 1]
  // + 0.5
  // [-0.5, 1.5]
  // * 100
  // [-50, 150]

  // Trim them to safe values (0, 100).
  // [0, 100]

  // Initial Step.
  botQuat = (botQuat + 0.5) * 100;
  topQuat = (topQuat + 0.5) * 100;

  // SetPositionMap should clamp and warn of bad input.
  servoBot->setPositionMap(botQuat);
  servoTop->setPositionMap(topQuat);
}