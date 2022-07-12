# Arduino Stepper library for Mongoose OS

This library provides an Arduino compatibility layer for stepper by providing
an `Stepper.h` public header, so that one could pick an existing Arduino
program which uses stepper, throw it into the Mongoose OS application sources,
and ideally, it "just works".

Additionally, a mgos-specific API is available, see
`include/mgos_arduino_stepper.h` and `mjs_fs/api_arduino_stepper.js`.
