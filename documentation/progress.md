# Project Progress

This document records the development of the robot from initial assembly to the final build.

## Milestones

| Date | Milestone | Status |
|---|---|---|
| 2026-08-19 | Project repository created | Done |
| 2026-08-20 | Chassis assembled | Done |
| 2026-08-20 | Motors tested | Done |
| 2026-08-21 | Motor driver tested | Done |
| 2026-08-21 | Basic forward & backward movement implemented | Done|
| 2026-08-26 | Implemented all 4 directions | Done |
| 2026-08-26 | WASD keyboard control | Done |
| — | Remote control implemented |  |
| — | Sensors integrated |  |
| — | Autonomous movement |  |
| — | Final build |  |

## Development Log

### 2026-08-19 — Repository Setup

- Created GitHub repository.
- Initialized local Git repository.
- Connected local repository to GitHub.
- Created initial project documentation structure.

### 2026-08-20 - Chassis Assemby

- Chassis partly assembled by adding Gear Motors, Arduino, Battery Pack, Switch Pin.
- Both motors tested

### 2026-08-21 - Driver Test & Basic Movement Implementation

- Motor A tested through TB6612FNG
- Motor B tested through TB6612FNG
- Both Motor A & Motor B tested through TB6612FNG
- Assembled the Components to the Chassis ( Mini Breadboard, Arduino, Wirings, TB6612FNG and Power Bank as temporary Power Supply)
- Tested Movement of Motors/Wheels
- Implemented Front & Reverse for the Wheels

### 2026-08-26 - 4 Directions & Keyboard Control

- Tested Forward, Backward, Left & Right movement
- Added movement functions for each direction and stop
- Added PWM compensation for motor speed difference
- Implemented WASD keyboard control via Serial
- Added Python keyboard controller with automatic stop

### 2026-08-27 - Added Wiring & Notes
- Notes added in documentation
- Wiring/Pinout added in hardware
