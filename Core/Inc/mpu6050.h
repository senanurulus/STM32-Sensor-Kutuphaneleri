/*
 * mpu6050.h
 *
 *  Created on: Feb 5, 2025
 *      Author: nurul
 */

#ifndef INC_MPU6050_H_
#define INC_MPU6050_H_

#include "main.h"

#define TIMEOUT                      1000
#define MPU6050_DEVICE_ADDRESS       0x68 << 1 // 0xD0
#define MPU6050_REG_WHO_AM_I         0x75
#define MPU6050_REG_PWR_MGMT_1       0x6B
#define MPU6050_REG_PWR_MGMT_2       0x6C
#define MPU6050_REG_ACCEL_CONFIG     0x1C
#define MPU6050_REG_GYRO_CONFIG      0x1B
#define MPU6050_REG_ACCEL_XOUT_H     0x3B
#define MPU6050_REG_GYRO_XOUT_H      0x43
#define MPU6050_REG_TEMP_OUT_H       0x41

#define MPU6050_ACCEL_RANGE_2G        0x00
#define MPU6050_ACCEL_RANGE_4G        0x01
#define MPU6050_ACCEL_RANGE_8G        0x02
#define MPU6050_ACCEL_RANGE_16G       0x03

#define MPU6050_GYRO_RANGE_250        0x00
#define MPU6050_GYRO_RANGE_500        0x01
#define MPU6050_GYRO_RANGE_1000       0x02
#define MPU6050_GYRO_RANGE_2000       0x03

#endif /* INC_MPU6050_H_ */
