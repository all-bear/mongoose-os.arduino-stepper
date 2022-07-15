#include "mgos_arduino_stepper.h"

Stepper *mgos_Stepper_create_2_pins(int number_of_steps, int motor_pin_1, int motor_pin_2) {
    return new Stepper(number_of_steps, motor_pin_1, motor_pin_2);
}

Stepper *mgos_Stepper_create_4_pins(int number_of_steps, int motor_pin_1, int motor_pin_2, int motor_pin_3, int motor_pin_4) {
    return new Stepper(number_of_steps, motor_pin_1, motor_pin_2, motor_pin_3, motor_pin_4);
}

Stepper *mgos_Stepper_create_5_pins(int number_of_steps, int motor_pin_1, int motor_pin_2, int motor_pin_3, int motor_pin_4, int motor_pin_5) {
    return new Stepper(number_of_steps, motor_pin_1, motor_pin_2, motor_pin_3, motor_pin_4, motor_pin_5);
}


void mgos_Stepper_setSpeed(Stepper *stepper, int speed) {
    if (stepper == nullptr) return;

    stepper->setSpeed(speed);
}

void mgos_Stepper_step(Stepper *stepper, int number_of_steps) {
    if (stepper == nullptr) return;

    stepper->step(number_of_steps);
}

void mgos_Stepper_step_and_release(Stepper *stepper, int number_of_steps) {
    if (stepper == nullptr) return;

    stepper->stepAndRelease(number_of_steps);
}