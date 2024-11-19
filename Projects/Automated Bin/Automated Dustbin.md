# Arduino Automated Bin

This is an automated bin,the bin lid opens when an object is noticed within a certain distance, and the LED and buzzer provide visual and audio alerts based on distance measurements.

## Components

- Arduino Uno or any compatible board
- 2 Ultrasonic Sensors (HC-SR04)
- Servo Motor
- LED
- Buzzer
- Breadboard and jumper wires

## Circuit Diagram

| Arduino Pin | Component          | Description                                |
|-------------|--------------------|--------------------------------------------|
| 7           | Ultrasonic Sensor 1 | Trig Pin                                   |
| 6           | Ultrasonic Sensor 1 | Echo Pin                                   |
| 2           | Ultrasonic Sensor 2 | Trig Pin                                   |
| 3           | Ultrasonic Sensor 2 | Echo Pin                                   |
| 9           | Servo Motor         | Signal Pin                                 |
| 13          | LED                 | Anode (long leg) connected through resistor|
| GND         | LED                 | Cathode (short leg)                        |
| 10          | Buzzer              | Positive Pin                               |
| GND         | Buzzer              | Negative Pin                               |

![schematics](https://github.com/swalehmwadime/IOT-Arduino-Sample-projects/blob/main/Projects/Automated%20Bin/automated-bin.png)


## Code

```cpp
#include <Servo.h>   

#define trigPin 7
#define echoPin 6
#define trigPin1 2
#define echoPin1 3
#define servo 9 
#define led 13 
#define Buzzer 10 

Servo binservo;
int position = 0;
long duration;
float distance;

void setup() {
  binservo.attach(servo);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT); 
  pinMode(led, OUTPUT);
  binservo.write(position);
  pinMode(Buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Sensor 1 - Bin Lid Control
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = 0.03423 * (duration / 2);

  if (distance <= 15) {
    digitalWrite(led, HIGH);
    binservo.write(180); 
    delay(1500);
  } else {
    digitalWrite(led, LOW);
    binservo.write(30);
    delay(10);
  }
  delay(300);

  // Sensor 2 - Buzzer Alert
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);

  duration = pulseIn(echoPin1, HIGH);
  distance = 0.03423 * (duration / 2);

  if (distance <= 15) {
    digitalWrite(Buzzer, HIGH);
    delay(5000);
  } else {
    digitalWrite(Buzzer, LOW);
    delay(10);
  }
  delay(300);
}
```

## Circuit Configuration

1. **Connect the Components:**
   - **Ultrasonic Sensor 1:**
     - Connect the Trig pin to Arduino pin 7.
     - Connect the Echo pin to Arduino pin 6.
     - Connect VCC to 5V and GND to GND.
   - **Ultrasonic Sensor 2:**
     - Connect the Trig pin to Arduino pin 2.
     - Connect the Echo pin to Arduino pin 3.
     - Connect VCC to 5V and GND to GND.
   - **Servo Motor:**
     - Connect the signal pin to Arduino pin 9.
     - Connect VCC to 5V and GND to GND.
   - **LED:**
     - Connect the anode (long leg) to Arduino pin 13 through a resistor.
     - Connect the cathode (short leg) to GND.
   - **Buzzer:**
     - Connect the positive pin to Arduino pin 10.
     - Connect the negative pin to GND.

2. **Upload the Code:**
   - Open the Arduino IDE.
   - Copy and paste the provided code into the IDE.
   - Select your Arduino board and the correct COM port.
   - Upload the code to your Arduino.

3. **Power the Arduino:**
   - Once the code is uploaded, power your Arduino using a USB cable or an external power supply.

4. **Observe the Behavior:**
   - When an object is detected within 15 cm by the first ultrasonic sensor, the bin lid will open (servo rotates to 180 degrees), and the LED will turn on.
   - When no object is detected, the bin lid will close (servo rotates to 30 degrees), and the LED will turn off.
   - When an object is detected within 15 cm by the second ultrasonic sensor, the buzzer will sound for 5 seconds.
   - When no object is detected, the buzzer will be off.

## Bug Fixing

- **Servo Motor Not Moving:**
  - Check the connections between the Arduino and the servo motor.
  - Ensure the servo motor is connected with the correct polarity.
  - Verify that the Arduino is properly powered.

- **LED or Buzzer Not Working:**
  - Check the connections between the Arduino and the components.
  - Ensure the components are connected with the correct polarity.
  - Verify that the Arduino is properly powered.

- **Incorrect Distance Measurements:**
  - Ensure the ultrasonic sensors are connected properly.
  - Check for obstacles that may interfere with the sensor readings.


