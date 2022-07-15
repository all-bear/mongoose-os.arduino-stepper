#ifndef CS_MOS_LIBS_ARDUINO_STEPPER_H_
#define CS_MOS_LIBS_ARDUINO_STEPPER_H_

#include "Stepper.h"

#ifdef __cplusplus
extern "C" {
#endif

Stepper *mgos_Stepper_create(int number_of_steps, int motor_pin_1, int motor_pin_2, int motor_pin_3, int motor_pin_4);

void mgos_Stepper_setSpeed(Stepper *stepper, int speed);

void mgos_Stepper_step(Stepper *stepper, int number_of_steps, bool hold = true);

#ifdef __cplusplus
}
#endif

#endif /* CS_MOS_LIBS_ARDUINO_STEPPER_H_ */