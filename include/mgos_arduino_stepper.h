#ifndef CS_MOS_LIBS_ARDUINO_STEPPER_H_
#define CS_MOS_LIBS_ARDUINO_STEPPER_H_

#include "Stepper.h"

#ifdef __cplusplus
extern "C" {
#endif

Stepper *mgos_Stepper_create_2_pins(int number_of_steps, int motor_pin_1, int motor_pin_2);
Stepper *mgos_Stepper_create_4_pins(int number_of_steps, int motor_pin_1, int motor_pin_2, int motor_pin_3, int motor_pin_4);
Stepper *mgos_Stepper_create_5_pins(int number_of_steps, int motor_pin_1, int motor_pin_2, int motor_pin_3, int motor_pin_4, int motor_pin_5);

void mgos_Stepper_setSpeed(Stepper *stepper, int speed);

void mgos_Stepper_step(Stepper *stepper, int number_of_steps);

void mgos_Stepper_step_and_release(Stepper *stepper, int number_of_steps);

#ifdef __cplusplus
}
#endif

#endif /* CS_MOS_LIBS_ARDUINO_STEPPER_H_ */