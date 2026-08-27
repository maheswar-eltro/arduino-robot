# Notes

## Motor Driver

- The TB6612FNG is used to control both DC geared motors.
- Motor A is connected to the right motor.
- Motor B is connected to the left motor.
- STBY must be set HIGH for the motor driver to operate.
- VCC is connected to the Arduino 5V pin.
- VM is connected to the battery supply.

## Motor Behaviour

- Motor A and Motor B do not run at exactly the same speed with identical PWM values.
- PWM compensation was used to reduce the difference in motor speeds.
- Motor A is controlled through AIN1, AIN2 and PWMA.
- Motor B is controlled through BIN1, BIN2 and PWMB.
- Driving the two motors in opposite directions allows the robot to spin in place.

## Troubleshooting

- Motors were tested individually before testing both motors together.
- Motor driver wiring was checked during the initial motor tests.
- Different PWM values were required to achieve more consistent movement.

## Control

- Basic movement was first implemented directly through Arduino code.
- Four-direction movement was then implemented.
- Keyboard control was added using WASD.
- Python is used to send movement commands to the Arduino through Serial communication.

## Future Ideas

- Add a servo.
- Add sensors.
- Add remote control.
- Explore autonomous movement.