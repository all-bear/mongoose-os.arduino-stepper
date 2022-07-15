# Arduino Stepper library for Mongoose OS

This library provides an Arduino compatibility layer for `Stepper` library.

Only one change is that there is addition function `stepAndRelease` which behave same as `step` but it will put all motor pins to 0 level after movement.
