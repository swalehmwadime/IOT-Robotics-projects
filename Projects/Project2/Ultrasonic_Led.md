# Project 2: Ultrasonic Sensor and LED Control


## Getting Started

Follow these steps to get started with this project:

1. **Connect Components:**
   - Connect the components as follows:
     - Connect the ultrasonic sensor's VCC pin to the 5V pin on the Arduino.
     - Connect the ultrasonic sensor's GND pin to the GND pin on the Arduino.
     - Connect the ultrasonic sensor's TRIG pin to pin 13 (digital pin) on the Arduino.
     - Connect the ultrasonic sensor's ECHO pin to pin 12 (digital pin) on the Arduino.
     - Connect each LED's anode (longer leg) to separate digital pins on the Arduino.
     - Connect each LED's cathode (shorter leg) to a current-limiting resistor (e.g., 220 ohms).
     - Connect the other end of the resistors to the ground (GND) pin on the Arduino.

2. **Upload Code:**
   - Open the `Ultrasonic_LED_Control.ino` file in the Arduino IDE.
   - Upload the code to the Arduino board.

3. **Observe Output:**
   - Observe the LEDs lighting up based on the distance detected by the ultrasonic sensor.

## Files

- `Ultrasonic_LED_Control.ino`: Arduino code for Ultrasonic Sensor and LED Control project.
- `schematics/`: Circuit schematics for Ultrasonic Sensor and LED Control project.
