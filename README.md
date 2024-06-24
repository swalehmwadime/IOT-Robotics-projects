# IoT Arduino Sample Projects
![IoT](https://github.com/swalehmwadime/IOT-Arduino-Sample-projects/blob/main/Images/IOT.jpg)

This repository contains sample Arduino projects for IoT applications using Wokwi, Arduino, and various components. Each project is designed to help you understand and experiment with different aspects of IoT development.

## Software Requirements

Before getting started with the projects, ensure you have the following software installed:

1. **Wokwi Account:**
   - Create an account on [Wokwi](https://wokwi.com/).
   - This will allow you to simulate the Arduino projects online.

2. **Arduino IDE:**
   - Download and install the [Arduino IDE](https://www.arduino.cc/en/software).
   - The Arduino IDE is essential for uploading code to physical Arduino boards.

## Getting Started with Wokwi Simulation

1. **Upload Codes to Wokwi:**
   - After creating an account on Wokwi, navigate to the platform.
   - Open the Wokwi Arduino simulator.
   - Copy the code from the respective project folder in this repository.
   - Paste the code into the Wokwi Arduino simulator's code editor.
   - Arrange the virtual components on the Wokwi canvas as per the provided schematics.

2. **Simulate the Circuit:**
   - Press the "Run" button in Wokwi to simulate the Arduino circuit.
   - Observe the virtual components responding to the uploaded code.
   - Troubleshoot and experiment with the circuit in the simulated environment.

## Testing on Physical Arduino Board

If you have an Arduino board (recommended: Arduino Mega), follow these steps to test the projects on a physical device:

1. **Connect Arduino Board:**
   - Connect your Arduino board to your computer using a USB cable.

2. **Open Arduino IDE:**
   - Open the Arduino IDE on your computer.
![Arduino Image](https://github.com/swalehmwadime/IOT-Arduino-Sample-projects/blob/main/Images/Arduino-IDE.png)
3. **Configure Arduino IDE:**
   - In Arduino IDE, go to `Tools > Board` and select the appropriate Arduino board model (e.g., Arduino Mega).

4. **Upload Code:**
   - Open the Arduino code file from the respective project folder in this repository.
   - Click the "Upload" button in Arduino IDE to upload the code to the connected Arduino board.

5. **Observe Output:**
   - Observe the connected components (LEDs, sensors, etc.) responding to the code on your physical Arduino board.




## Projects

- **Project 1: LED Blink**
  - Simple Arduino code to blink an LED.
  - Components Used:
    - Arduino board
    - LED
    - Resistor (220 ohm/ if needed)
  - Instructions:
    1. Connect the LED to pin 12 on the Arduino.
    2. Upload the provided Arduino code.
    3. Observe the LED blinking at different intervals.

- **Project 2: Ultrasonic Sensor and LED Control**
  - An Arduino project that uses an ultrasonic sensor to control multiple LEDs based on the detected distance.
  - Components Used:
    - Arduino board
    - Ultrasonic sensor
    - LEDs (10x)
    - Resistors (as needed)
  - Instructions:
    1. Connect the ultrasonic sensor and LEDs as per the schematic.
    2. Upload the provided Arduino code.
    3. Observe the LEDs lighting up based on the distance detected by the ultrasonic sensor.

- **Project 3: Buzzer and LED Sequence**
  - A simple project with an Arduino controlling a buzzer and LED sequence.
  - Components Used:
    - Arduino board
    - Buzzer
    - LED
    - Resistor (if needed)
  - Instructions:
    1. Connect the buzzer and LED to the specified pins on the Arduino.
    2. Upload the provided Arduino code.
    3. Observe the buzzer and LED sequence.

- **Project 4: LCD and Ultrasonic Sensor**
  - An Arduino project that uses an LCD display to show the distance measured by an ultrasonic sensor.
  - Components Used:
    - Arduino board
    - Ultrasonic sensor
    - LCD display
    - Resistors (as needed)
  - Instructions:
    1. Connect the ultrasonic sensor and LCD display as per the schematic.
    2. Upload the provided Arduino code.
    3. Observe the distance displayed on the LCD.

- **Project 5: Servo Motor Control**
  - An Arduino project that controls a servo motor to sweep between 0 and 180 degrees.
  - Components Used:
    - Arduino board
    - Servo motor
  - Instructions:
    1. Connect the servo motor to the specified pin on the Arduino.
    2. Upload the provided Arduino code.
    3. Observe the servo motor sweeping between 0 and 180 degrees.
   
 - **Project 6: Sound Sensor**
   - An Arduino project that detects sound using a sound sensor and turns on an LED.
   - Components Used:
    - Arduino board
    - Sound sensor
    - LED
   - Instructions:
    1. Connect the sound sensor and LED to the specified pins on the Arduino.
    2. Upload the provided Arduino code.
    3. Observe the LED lighting up when sound is detected.
   
- **Project 7: PIR Motion Sensor**
  - An Arduino project that detects motion using a Passive InfraRed motion sensor and activates LEDs and a buzzer.
  - Components Used:
    - Arduino board
    - PIR motion sensor
    - LEDs
    - Buzzer
  - Instructions:
    1. Connect the PIR motion sensor, LEDs, and buzzer to the specified pins on the Arduino.
    2. Upload the provided Arduino code.
    3. Observe the LEDs and buzzer activating when motion is detected.   

## File Structure

- **Projects**
  - **Project1**
    - `LED_Blink.ino`: Arduino code for LED Blink project.
    - `schematics/`: Circuit schematics for LED Blink project.
  - **Project2**
    - `Ultrasonic_LED_Control.ino`: Arduino code for Ultrasonic Sensor and LED Control project.
    - `schematics/`: Circuit schematics for Ultrasonic Sensor and LED Control project.
  - **Project3**
    - `Buzzer_LED_Sequence.ino`: Arduino code for Buzzer and LED Sequence project.
    - `schematics/`: Circuit schematics for Buzzer and LED Sequence project.
  - **Project4**
    - `LCD_Ultrasonic.ino`: Arduino code for LCD and Ultrasonic Sensor project.
    - `schematics/`: Circuit schematics for LCD and Ultrasonic Sensor project.
  - **Project5**
    - `Servo_Control.ino`: Arduino code for Servo Motor Control project.
    - `schematics/`: Circuit schematics for Servo Motor Control project.
   
  - **Project6**
    - `Sound_Sensor.ino`: Arduino code for Sound Sensor project.
    - `schematics/`: Circuit schematics for Sound Sensor project.
   
## Additional Resources
How to use Wokwi  [sample video](https://www.youtube.com/watch?v=w9_UrWdPWeo&list=PLfdwhnay89Kn3sd6n_kGYg70cWQKG1n6j&index=1) 
   
## License

This repository is licensed under the MIT License. See the [LICENSE](https://github.com/swalehmwadime/NLP-Beginners-guide/blob/main/LICENSE) file for details.
   
 


