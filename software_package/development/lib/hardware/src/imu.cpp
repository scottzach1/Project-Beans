
#include "imu.h"

Imu::Imu() {}

double Imu::read_accl_x() { return 1.0; }

double Imu::read_accl_y() { return 1.0; }

double Imu::read_accl_z() {}

Imu::Axis Imu::read_accl() {}

double Imu::read_gyro_x() {}

double Imu::read_gyro_y() {}

double Imu::read_gyro_z() {}

Imu::Axis Imu::read_gyro() {}
