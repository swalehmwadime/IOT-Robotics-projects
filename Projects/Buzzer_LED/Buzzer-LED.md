# Project 3: Buzzer and LED Sequence



### Getting Started

1. **Connect Components:**
   
    
       
| Arduino Pin | Component          | Description                                |
|-------------|--------------------|--------------------------------------------|
| 7           | LED                 | Anode (long leg)                          |
| GND         | LED                 | Cathode (short leg) connected to a resistor|
| 5           | Buzzer              | Positive Pin                              |
| GND         | Buzzer              | Negative Pin                              |
2. **Upload Code:**
   - Upload the code to the Arduino board.
   ## Code

```cpp
#include <Servo.h>   
#define led 7
#define Buzzer 5

     void setup()
      {
      pinMode(LED, OUTPUT);
      pinMode(Buzzer, OUTPUT);
     }
     void loop()
      {
       digitalWrite(LED, HIGH);
       delay(100);
       digitalWrite(LED, LOW);
       delay(500);
       digitalWrite(Buzzer, HIGH);
       delay(200);
      digitalWrite(Buzzer, LOW);
      delay(50);
      }
```


3. **Observe Output:**
   - Observe the sequence of buzzer sounds and LED flashes.


