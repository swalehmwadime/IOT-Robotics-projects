# Project 1: LED_BLINK


1. **Connect Components:**
   - Connect the components as follows:
     - Connect the LED's longer leg (anode) to pin 12 (digital pin) on the Arduino.
     - Connect the LED's shorter leg (cathode) to a current-limiting resistor (e.g., 220 ohms).
     - Connect the other end of the resistor to the ground (GND) pin on the Arduino.

## Circuit Diagram

| Arduino Pin | Component          | Description                                |
|-------------|--------------------|--------------------------------------------|
| 12          | LED                 | Anode (long leg)                          |
| GND         | LED                 | Cathode (short leg)connected through resistor|






   - ## Code

```cpp
#include <Servo.h>   
#define LED 12

void setup()
{
    // put your setup code here, to run once:
    pinMode(LED, OUTPUT);
}
void loop()
{
    // put your main code here, to run repeat:
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(500);
}
```




![Circuit schematics](https://github.com/swalehmwadime/IOT-Robotics-projects/blob/main/Projects/LED_Blink/LED.png).
