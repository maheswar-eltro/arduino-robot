# Hardware Components

This document lists the hardware used in the robot, along with the purpose and relevant specifications of each component.

## Main Components

| Component | Model / Specification | Quantity | Purpose |
|---|---|---:|---|
| Microcontroller | Arduino Uno R4 Minima | 1 | Main controller |
| Chassis | 2-Wheel Wooden Chassis | 1 | Robot frame |
| DC Geared Motors | Yellow TT Geared Motors | 2 | Drive the wheels |
| Wheels | 65 mm | 2 | Provide movement |
| Castor Wheel | — | 1 | Robot stabilization |
| Motor Driver | TB6612FNG Dual Motor Driver Module | 1 | Controls motor speed and direction |
| Battery Holder | 18650 Battery Holder | 1 | Holds the batteries |
| Batteries | 18650 Lithium-Ion Batteries | 2 | Power supply |

## Supporting Components

| Component | Quantity | Purpose |
|---|---:|---|
| Jumper Wires | — | Electrical connections |
| Screws / Spacers | 4 | Mechanical assembly |

---

## Component Details

### Microcontroller

**Model:** Arduino Uno R4 Minima

**Purpose:**  
Acts as the main controller of the robot and executes the control program. It generates the control signals required by the motor driver.

---

### Chassis

**Model:** 2-Wheel Wooden Chassis

**Purpose:**  
Provides the mechanical structure on which the motors, wheels, castor wheel and electronic components are mounted.

---

### DC Geared Motors

**Model:** Yellow TT Geared Motor

**Specifications:** 3V–6V DC geared motor

**Quantity:** 2

**Purpose:**  
Provides the mechanical drive for the robot. The gearbox reduces the motor's rotational speed while increasing the available torque, allowing the motors to drive the wheels.

**Mounting:**  
Mounted to the robot chassis and coupled to the drive wheels.

**Control:**  
Driven through the TB6612FNG motor driver.

**Function:**  
The two motors are controlled independently to achieve forward, reverse, turning and stopping movements.

---

### Wheels

**Diameter:** 65 mm

**Quantity:** 2

**Purpose:**  
Transmit the rotational motion of the geared motors to the ground and provide the primary movement of the robot.

**Mounting:**  
Each wheel is attached to one of the TT geared motors.

---

### Castor Wheel

**Quantity:** 1

**Purpose:**  
Provides additional support and stability to the chassis while allowing the robot to turn freely.

**Mounting:**  
Mounted at the front/rear of the chassis opposite the two driven wheels.

---

### Motor Driver

**Model:** TB6612FNG Dual Motor Driver Module

**Quantity:** 1

**Purpose:**  
Controls the direction and speed of the two DC geared motors. It acts as an interface between the Arduino and the motors, allowing the Arduino to control the motors without powering them directly.

**Motor Outputs:**
- Motor A → A01 / A02
- Motor B → B01 / B02

**Control Interface:**
- Motor A direction → AIN1 / AIN2
- Motor A speed → PWMA (PWM)
- Motor B direction → BIN1 / BIN2
- Motor B speed → PWMB (PWM)
- Standby control → STBY

**Power:**
- VCC → Arduino 5V (logic supply)
- VM → External motor supply
- GND → Common ground between Arduino and motor supply

**Drive Configuration:**
- Motor A → Right motor
- Motor B → Left motor

**Controller:** Arduino Uno R4 Minima

---

### Battery Holder

**Model:** 18650 Battery Holder

**Quantity:** 1

**Purpose:**  
Holds the 18650 batteries and provides a secure electrical connection between the batteries and the robot's power circuit.

---

### Batteries

**Model:** 18650 Lithium-Ion Battery

**Quantity:** 2

**Purpose:**  
Provide electrical power for the robot's power system.

---

### Jumper Wires

**Quantity:** Various

**Purpose:**  
Used to establish electrical connections between the Arduino, motor driver and power supply during prototyping.

---

### Screws / Spacers

**Quantity:** 6

**Purpose:**  
Used for mounting and securing Arduino, Castor Wheel, 65MM Wheels to the robot chassis.

---

## Notes

- The motors are not powered directly from the Arduino.
- The TB6612FNG provides independent direction and speed control for both motors.
- The Arduino provides the logic/control signals to the motor driver.
- The motor supply and Arduino share a common ground.
- Exact Arduino-to-driver pin assignments and power connections are documented separately in `Wiring.md`.