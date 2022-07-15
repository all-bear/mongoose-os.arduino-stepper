# Arduino Stepper library for Mongoose OS

This library provides an Arduino compatibility layer for `Stepper` library.

Only on change is that `step` function have additional parameter `hold` (true by default), if hold is false then all pins will have 0 level after end of movement.
