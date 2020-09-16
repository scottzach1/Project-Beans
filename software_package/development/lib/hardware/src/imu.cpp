#include "imu.h"

#include "debug.h"

Imu::Imu() = default;
Imu::~Imu() = default;

void Imu::init() {
    while (!mpu.begin()) delay(10);

    DEBUG_MSG_LN(1, "MPU6050 Found!");

    mpu.setAccelerometerRange(MPU6050_RANGE_16_G);

    DEBUG_MSG(2, "Accelerometer range set to: ");
    switch (mpu.getAccelerometerRange()) {
        case MPU6050_RANGE_2_G:
            DEBUG_MSG_LN(2, "+-2G");
            break;
        case MPU6050_RANGE_4_G:
            DEBUG_MSG_LN(2, "+-4G");
            break;
        case MPU6050_RANGE_8_G:
            DEBUG_MSG_LN(2, "+-8G");
            break;
        case MPU6050_RANGE_16_G:
            DEBUG_MSG_LN(2, "+-16G");
            break;
    }

    mpu.setGyroRange(MPU6050_RANGE_500_DEG);
    DEBUG_MSG(2, "Gyro range set to: ");
    switch (mpu.getGyroRange()) {
        case MPU6050_RANGE_250_DEG:
            DEBUG_MSG_LN(2, "+- 250 deg/s");
            break;
        case MPU6050_RANGE_500_DEG:
            DEBUG_MSG_LN(2, "+- 500 deg/s");
            break;
        case MPU6050_RANGE_1000_DEG:
            DEBUG_MSG_LN(2, "+- 1000 deg/s");
            break;
        case MPU6050_RANGE_2000_DEG:
            DEBUG_MSG_LN(2, "+- 2000 deg/s");
            break;
    }

    mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);
    DEBUG_MSG(2, "Filter bandwidth set to: ");
    switch (mpu.getFilterBandwidth()) {
        case MPU6050_BAND_260_HZ:
            DEBUG_MSG_LN(2, "260 Hz");
            break;
        case MPU6050_BAND_184_HZ:
            DEBUG_MSG_LN(2, "184 Hz");
            break;
        case MPU6050_BAND_94_HZ:
            DEBUG_MSG_LN(2, "94 Hz");
            break;
        case MPU6050_BAND_44_HZ:
            DEBUG_MSG_LN(2, "44 Hz");
            break;
        case MPU6050_BAND_21_HZ:
            DEBUG_MSG_LN(2, "21 Hz");
            break;
        case MPU6050_BAND_10_HZ:
            DEBUG_MSG_LN(2, "10 Hz");
            break;
        case MPU6050_BAND_5_HZ:
            DEBUG_MSG_LN(2, "5 Hz");
            break;
    }

    DEBUG_MSG_LN(2, "");

    delay(100);
}

void Imu::update() { mpu.getEvent(&a, &g, &temp); }

float Imu::read_accl_x() {
    DEBUG_MSG_F(2, "Acceleration X: %s m/s^2\n",
                String(a.acceleration.x).c_str());
    return a.acceleration.x;
}

float Imu::read_accl_y() {
    DEBUG_MSG_F(2, "Acceleration Y: %s m/s^2\n",
                String(a.acceleration.y).c_str());
    return a.acceleration.y;
}

float Imu::read_accl_z() {
    DEBUG_MSG_F(2, "Acceleration Z: %s m/s^2\n",
                String(a.acceleration.z).c_str());
    return a.acceleration.z;
}

sensors_vec_t Imu::read_accl() {
    DEBUG_MSG_F(2, "Acceleration: {%s, %s, %s} m/s^2\n",
                String(a.acceleration.x).c_str(),
                String(a.acceleration.y).c_str(),
                String(a.acceleration.z).c_str());
    return a.acceleration;
}

float Imu::read_gyro_x() {
    DEBUG_MSG_F(2, "Rotation X: %s rad/s\n", String(g.gyro.x).c_str());
    return g.gyro.x;
}

float Imu::read_gyro_y() {
    DEBUG_MSG_F(2, "Rotation Y: %s rad/s\n", String(g.gyro.y).c_str());
    return g.gyro.y;
}

float Imu::read_gyro_z() {
    DEBUG_MSG_F(2, "Rotation Z: %s rad/s\n", String(g.gyro.z).c_str());
    return g.gyro.z;
}

sensors_vec_t Imu::read_gyro() {
    DEBUG_MSG_F(2, "Gyro: {%s, %s, %s} rad/s.\n", String(g.gyro.x).c_str(),
                String(g.gyro.y).c_str(), String(g.gyro.z).c_str());
    return g.gyro;
}
