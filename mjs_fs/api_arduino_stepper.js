let Stepper = {
    _create_2_pins: ffi('void *mgos_Stepper_create_2_pins(int, int, int)'),
    _create_4_pins: ffi('void *mgos_Stepper_create_4_pins(int, int, int, int, int)'),
    _create_5_pins: ffi('void *mgos_Stepper_create_5_pins(int, int, int, int, int, int)'),
    _setSpeed: ffi('void mgos_Stepper_setSpeed(void *, int)'),
    _step: ffi('void mgos_Stepper_step(void *, int)'),
    _stepAndRelease: ffi('void mgos_Stepper_step_and_release(void *, int)'),

    create: function(number_of_steps, motor_pin_1, motor_pin_2, motor_pin_3, motor_pin_4, motor_pin_5) {
        let obj = Object.create(Stepper._proto);
        if (typeof motor_pin_3 === "undefined" && typeof motor_pin_4 === "undefined" && typeof motor_pin_5 === "undefined") {
            obj.stepper = Stepper._create_2_pins(number_of_steps, motor_pin_1, motor_pin_2);
        } else if (typeof motor_pin_5 === "undefined") {
            obj.stepper = Stepper._create_4_pins(number_of_steps, motor_pin_1, motor_pin_2, motor_pin_3, motor_pin_4);
        } else {
            obj.stepper = Stepper._create_5_pins(number_of_steps, motor_pin_1, motor_pin_2, motor_pin_3, motor_pin_4, motor_pin_5);
        }
        
        return obj;
    },

    _proto: {
        setSpeed: function(speed,) {
          return Stepper._setSpeed(this.stepper, speed);
        },

        step: function(number_of_steps) {
            return Stepper._step(this.stepper, number_of_steps);
        },
        
        stepAndRelease: function(number_of_steps) {
            return Stepper._stepAndRelease(this.stepper, number_of_steps);
        },
    },    
};