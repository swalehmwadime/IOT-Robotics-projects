# Arduino Servo Motor 
 Using a servo motor in an Arduino. The servo motor is commanded to move to specific angles and also performs a sweeping motion from 0 to 180 degrees and back.

## Components

- Arduino Mega or any compatible board of your choice
- Servo Motor
- Breadboard and jumper wires

## Circuit Diagram

| Arduino Pin | Servo Motor Wire |
|-------------|------------------|
| 9           | Signal (Orange)  |
| 5V          | Power (Red)      |
| GND         | Ground (Brown)   |


## Code

```cpp
#include <Servo.h>

// Define the Servo pin:
#define servoPin 9

// Create a new servo object:
Servo doorservo;

// Create a variable to store the servo position:
int position = 0;

void setup() {
  // Attach the Servo variable to a pin:
  doorservo.attach(servoPin);
}

void loop() {
  // Tell the servo to go to a particular angle:
  doorservo.write(90);
  delay(500);
  doorservo.write(180);
  delay(500);
  doorservo.write(0);
  delay(500);

  // Sweep from 0 to 180 degrees:
  for (position = 0; position <= 180; position += 1) {
    doorservo.write(position);
    delay(30);
  }

  // And back from 180 to 0 degrees:
  for (position = 180; position >= 0; position -= 1) {
    doorservo.write(position);
    delay(20);
  }

  delay(1000);
}
```

![schematics](https://github.com/swalehmwadime/IOT-Arduino-Sample-projects/blob/main/Projects/Servor%20motor/servo-motor1.png)

## Configuration of the circuit board

1. **Connect the Servo Motor:**
   - Connect the brown (GND) wire of the servo to the GND pin on the Arduino.
   - Connect the red (VCC) wire of the servo to the 5V pin on the Arduino.
   - Connect the orange (signal) wire of the servo to pin 9 on the Arduino.

2. **Upload the Code:**
   - Open the Arduino IDE.
   - Copy and paste the provided code into the IDE.
   - Select your Arduino board and the correct COM port.
   - Upload the code to your Arduino.

3. **Power the Arduino:**
   - Once the code is uploaded, power your Arduino using a USB cable or an external power supply.

4. **Observe the Servo Motor Movement:**
   - The servo motor will move to 90 degrees, then to 180 degrees, then to 0 degrees, each time pausing for 500 milliseconds.
   - The servo motor will then sweep smoothly from 0 to 180 degrees and back to 0 degrees.

## Troubleshooting

- **Servo Motor Not Moving:**
  - Check the connections between the Arduino and the servo motor.
  - Ensure the servo motor is connected with the correct polarity (brown to GND, red to 5V, orange to signal).
  - Verify that the Arduino is properly powered.

- **Servo Motor Jittering or Moving Erratically:**
  - Ensure that the power supply is adequate. The servo motor may draw more current than the Arduino can supply through its 5V pin. In such cases, use an external power source.
  - Check for loose connections.


```

