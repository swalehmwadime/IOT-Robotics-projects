# Project 3: Buzzer and LED Sequence



### Getting Started

1. **Connect Components:**
   - Connect the components as indicated down below:
     - Connect the buzzer's positive (red) wire to pin 5 (digital pin) on the Arduino.
     - Connect the buzzer's negative (black) wire to the ground (GND) pin on the Arduino.
     - Connect the LED's longer leg (anode) to pin 7 (digital pin) on the Arduino.
     - Connect the LED's shorter leg (cathode) to a resistor (e.g., 220 ohms).
     - Connect the other end of the resistor to the ground (GND) pin on the Arduino.

2. **Upload Code:**
   - Upload the code to the Arduino board.
     ```
     #define LED 7
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


