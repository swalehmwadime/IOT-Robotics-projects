
# Arduino PIR Motion Detector with LEDs and Buzzer

This project demonstartes how to use a PIR motion sensor to detect movement and trigger LEDs and a buzzer. When motion is detected, the LEDs light up and the buzzer sounds. The status is also printed to the Monitor.

## Components

- Arduino Uno or any compatible board
- PIR Motion Sensor
- Buzzer
- 2 LEDs
- Resistors (220Ω recommended for LEDs)
- Breadboard and jumper wires

## Circuit Diagram

| Arduino Pin | Component         |
|-------------|-------------------|
| 5           | PIR Sensor Output |
| 6           | Buzzer            |
| 7           | LED1              |
| 4           | LED2              |
| GND         | PIR Sensor GND    |
| 5V          | PIR Sensor VCC    |
| GND         | Buzzer GND        |
| GND         | LED1 Cathode      |
| GND         | LED2 Cathode      |

![Schematics](https://github.com/swalehmwadime/IOT-Arduino-Sample-projects/blob/main/Projects/Project7/Passive%20Infrared.png)
## Code

```cpp
#define PIR 5
#define Buzz 6
#define LED1 7
#define LED2 4

int val = 0; // Initializing the value as zero

void setup() {
    pinMode(Buzz, OUTPUT);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(PIR, INPUT);
    Serial.begin(9600);
}

void loop() {
    val = digitalRead(PIR);
    if (val == HIGH) { // Movement detected
        digitalWrite(LED1, HIGH); // Turn LED1 on
        digitalWrite(LED2, HIGH); // Turn LED2 on
        tone(Buzz, 1000); // Send 1KHz signal
        delay(1000); // For 1 second
        noTone(Buzz); // Stop sound
        Serial.println("Intruder Detected"); // Print to Serial Monitor
    } else {
        digitalWrite(LED1, LOW); // Turn LED1 off
        digitalWrite(LED2, LOW); // Turn LED2 off
        digitalWrite(Buzz, LOW); // Turn Buzzer off
        Serial.println("No movement detected");
    }
}
```

## Configuration Instructions

1. **Connect the Components:**
   - **PIR Sensor:**
     - Connect the VCC to the 5V pin on the Arduino.
     - Connect the GND to a GND pin on the Arduino.
     - Connect the OUT pin to Arduino pin 5.
   - **Buzzer:**
     - Connect the positive pin to Arduino pin 6.
     - Connect the negative pin to GND.
   - **LED1:**
     - Connect the anode (long leg) to Arduino pin 7 through a resistor.
     - Connect the cathode (short leg) to GND.
   - **LED2:**
     - Connect the anode (long leg) to Arduino pin 4 through a resistor.
     - Connect the cathode (short leg) to GND.

2. **Upload the Code:**
   - Open the Arduino IDE.
   - Copy and paste the provided code into the IDE.
   - Select your Arduino board and the correct COM port.
   - Upload the code to your Arduino.

3. **Power the Arduino:**
   - Once the code is uploaded, power your Arduino using a USB cable or an external power supply.

4. **Observe the Behavior:**
   - When motion is detected by the PIR sensor, both LEDs will light up and the buzzer will sound for 1 second. The message "Intruder Detected" will be printed to the Serial Monitor.
   - When no motion is detected, the LEDs and buzzer will be off, and the message "No movement detected" will be printed to the Serial Monitor.

## Troubleshooting

- **LEDs or Buzzer Not Working:**
  - Check the connections between the Arduino and the components.
  - Ensure the LEDs are connected with the correct polarity (anode to the Arduino pin through a resistor, cathode to GND).
  - Verify the PIR sensor is connected correctly and has power.

- **Incorrect or No Motion Detection:**
  - Ensure the PIR sensor is connected properly.
  - Check the sensitivity and delay time adjustments on the PIR sensor (if applicable).
  - Make sure there are no obstacles in the sensor's detection area.

## License

This project is open-source 

