# Sound Sensor Project

How to use an Arduino with a sound sensor to detect sound and turn on an LED when sound is detected.

## Components used
- Arduino board
- Sound sensor
- LED
- Resistor (optional, 220 ohm)
- Connecting wires
- Breadboard (optional for easier connections)

## Circuit Diagram

| Arduino Pin | Component          | Description                                |
|-------------|--------------------|--------------------------------------------|
| VCC         | Sound Sensor       | VCC pin                                    |
| GND         | Sound Sensor       | GNDPin                                     |
| 5           | Sound Sensor       |  OUT                                       |
| 6           | LED                | Anode (long leg)                          |
| GND         | LED                | Cathode (short leg)connected through resistor  |







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
