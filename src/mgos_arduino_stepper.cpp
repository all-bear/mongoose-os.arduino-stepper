#include "mgos_arduino_stepper.h"

Stepper *mgos_Stepper_create(int number_of_steps, int motor_pin_1, int motor_pin_2, int motor_pin_3, int motor_pin_4) {
    return new Stepper(number_of_steps, motor_pin_1, motor_pin_2, motor_pin_3, motor_pin_4);
}

void mgos_Stepper_setSpeed(Stepper *stepper, int speed) {
    if (stepper == nullptr) return;

    stepper->setSpeed(speed);
}

void mgos_Stepper_step(Stepper *stepper, int number_of_steps, bool hold = true) {
    if (stepper == nullptr) return;

    stepper->step(number_of_steps, hold);
}