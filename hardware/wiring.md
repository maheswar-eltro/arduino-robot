# Wiring

This document describes the wiring and connections used in the robot.

## Arduino ↔ TB6612FNG Pinout

| Arduino Pin | TB6612FNG Pin | Function |
|---|---|---|
| D3 | PWMA | Motor A PWM / speed |
| D4 | AIN2 | Motor A direction |
| D5 | AIN1 | Motor A direction |
| D7 | STBY | Driver standby / enable |
| D9 | BIN1 | Motor B direction |
| D10 | BIN2 | Motor B direction |
| D11 | PWMB | Motor B PWM / speed |

## Motor Connections

| Motor | TB6612FNG Output | Physical Position |
|---|---|---|
| Motor A | A01 / A02 | Right motor |
| Motor B | B01 / B02 | Left motor |

## Power Connections

| Connection | Purpose |
|---|---|
| Battery Holder (+) → VM | Motor power supply |
| Battery Holder (-) → Switch | Main power switch input |
| Switch → TB6612FNG GND (top-right) | Completes motor power circuit |
| Arduino 5V → VCC | Logic power supply |
| Arduino GND → TB6612FNG GND (bottom-left, below PWMB) | Common ground between Arduino and motor driver |

The battery supply is connected to VM for powering the motors, while the Arduino 5V supply powers the logic side of the TB6612FNG.
    