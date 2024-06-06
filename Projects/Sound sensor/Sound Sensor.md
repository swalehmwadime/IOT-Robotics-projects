# Sound Sensor Project

How to use an Arduino with a sound sensor to detect sound and turn on an LED when sound is detected.

## Components used
- Arduino board
- Sound sensor
- LED
- Resistor (optional, 220 ohm)
- Connecting wires
- Breadboard (optional for easier connections)

## Circuit Schematic

1. **Sound Sensor:**
   - Connect the VCC pin of the sound sensor to the 5V pin on the Arduino.
   - Connect the GND pin of the sound sensor to the GND pin on the Arduino.
   - Connect the OUT pin of the sound sensor to digital pin 5 on the Arduino.

2. **LED:**
   - Connect the anode (long leg) of the LED to digital pin 6 on the Arduino.
   - Connect the cathode (short leg) of the LED to a resistor (if used) and then to the GND pin on the Arduino.

![schematics](https://github.com/swalehmwadime/IOT-Arduino-Sample-projects/blob/main/Projects/Sound%20sensor/sound%20sensor.png)
## Arduino Code

```cpp
#define Kysensor 5
#define LED 6

void setup()
{
    pinMode(Kysensor, INPUT);
    pinMode(LED, OUTPUT);
}

void loop()
{
    int statusSensor = digitalRead(Kysensor);
    if (statusSensor == 1)
    {
        digitalWrite(LED, HIGH);
    }
    else
    {
        digitalWrite(LED, LOW);
    }
}
