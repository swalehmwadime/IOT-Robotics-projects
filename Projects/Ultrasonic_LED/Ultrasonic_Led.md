# Ultrasonic Sensor and LED Control

- `This project uses an ultrasonic sensor to control multiple LEDs based on the detected distance.`

## Components Used

- Arduino board(for this example we shall use Areduino Mega)
- Ultrasonic sensor
- LEDs (10x)
- Resistors (220 ohm, as needed)
- Connecting wires/jumper wires
- Breadboard (optional for easier connections)

## Getting Started

Follow these steps to get started with this project:

### Connect Components

Connect the components as follows:

| Component          | Arduino Pin      | Notes                                   |
|--------------------|------------------|-----------------------------------------|
| Ultrasonic Sensor  |                  |                                         |
| - VCC              | 5V               | Power supply                            |
| - GND              | GND              | Ground                                  |
| - TRIG             | 13 (digital pin) | Trigger pin                             |
| - ECHO             | 12 (digital pin) | Echo pin                                |
| LEDs               |                  |                                         |
| - Anode (long leg) | Digital pins 2-11| Separate digital pins                   |
| - Cathode (short leg) | GND (through resistor) | 220 ohm resistor between cathode and GND |

![](https://github.com/swalehmwadime/IOT-Arduino-Sample-projects/blob/main/Projects/Ultrasonic_LED/Ultrasonic-LED.png)
### Upload Code

1. Open the `Ultrasonic_LED_Control.ino` file in the Arduino IDE.
2. Connect your Arduino board to your computer via a USB cable.
3. Select the appropriate board and port in the Arduino IDE (`Tools > Board` and `Tools > Port`).
4. Click the "Upload" button to upload the code to the Arduino.

### Observe Output

- Once the code is uploaded, the LEDs will light up based on the distance detected by the ultrasonic sensor.

## Files

- `Ultrasonic_LED_Control.ino`: Arduino code for Ultrasonic Sensor and LED Control project.
- `schematics/`: Circuit schematics for Ultrasonic Sensor and LED Control project.

## Arduino Code

```cpp
#define TRIG_PIN 13
#define ECHO_PIN 12
#define NUM_LEDS 10
int ledPins[NUM_LEDS] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

long duration;
int distance;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  for (int i = 0; i < NUM_LEDS; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);
  distance = (duration * 0.0343) / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  int ledsToLight = map(distance, 0, 200, 0, NUM_LEDS);

  for (int i = 0; i < NUM_LEDS; i++) {
    if (i < ledsToLight) {
      digitalWrite(ledPins[i], HIGH);
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }

  delay(500);
}
