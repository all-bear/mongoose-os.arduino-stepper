let Stepper = {
    _create: ffi('void *mgos_Stepper_create(int, int, int, int, int)'),
    _setSpeed: ffi('void mgos_Stepper_setSpeed(void *, int)'),
    _step: ffi('void mgos_Stepper_step(void *, int)'),

    create: function(number_of_steps, motor_pin_1, motor_pin_2, motor_pin_3, motor_pin_4) {
        let obj = Object.create(Stepper._proto);
        obj.stepper = Stepper._create(number_of_steps, motor_pin_1, motor_pin_2, motor_pin_3, motor_pin_4);
        return obj;
    },

    _proto: {
        setSpeed: function(speed,) {
          return Stepper._setSpeed(this.stepper, speed);
        },

        step: function(number_of_steps, hold = true) {
            return Stepper._step(this.stepper, number_of_steps, hold);
        },
    },    
};