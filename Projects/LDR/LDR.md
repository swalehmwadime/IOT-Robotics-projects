# Arduino LDR

This project explains how to control two LEDs based on the ambient light levels using an Arduino. A light sensor (photoresistor) reads the light intensity, and depending on the value, it adjusts the state of the LEDs to simulate a house light and a street light.

## Components

- Arduino Mega or any compatible board
- Photoresistor (Light Sensor)
- 10kΩ Resistor (for voltage divider with the photoresistor)
- 2 LEDs
- 2 Resistors (220Ω recommended for LEDs)
- Breadboard and jumper wires

## Circuit Diagram

| Arduino Pin | Component         | Description                            |
|-------------|-------------------|----------------------------------------|
| A0          | Photoresistor     | Connect one end to 5V, the other end to A0 and GND via a 10kΩ resistor |
| 10          | houseLED          | Connect to the anode (long leg) of the house LED via a resistor |
| 11          | streetLED         | Connect to the anode (long leg) of the street LED via a resistor |
| GND         | Resistors         | Connect the cathodes (short legs) of both LEDs to GND |

![Schematics](https://github.com/swalehmwadime/IOT-Arduino-Sample-projects/blob/main/Projects/LDR/LDR.png)
## Code

```cpp
#define houseLED 10
#define streetLED 11
int light = 0; // Store the current light value

void setup() {
  Serial.begin(9600);
  pinMode(houseLED, OUTPUT);
  pinMode(streetLED, OUTPUT);
}

void loop() {
  light = analogRead(A0); // Read and save value

  Serial.println(light);
  if (light > 450) { // If it is bright
    Serial.println("It is bright outside!");
    digitalWrite(houseLED, LOW);
    digitalWrite(streetLED, LOW);
  } else if (light > 229 && light < 450) { // If there is average light
    Serial.println("It is quite bright outside");
    digitalWrite(houseLED, HIGH);
    digitalWrite(streetLED, LOW);
  } else { // If it's dark
    Serial.println("It is very dark!");
    digitalWrite(houseLED, HIGH);
    digitalWrite(streetLED, HIGH);
  }

  delay(1000);
}

