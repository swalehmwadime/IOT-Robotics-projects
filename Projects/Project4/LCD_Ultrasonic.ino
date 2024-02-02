// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define echoPin 7 // connect echo pin of ultrasonic
#define trigPin 6 // connect trigger to ultrasonic

long duration; // declare variables to hold durations
int distance;

void setup()
{
    pinMode(trigPin, OUTPUT); // set trigPin as output
    pinMode(echoPin, INPUT);  // set echoPin as output
    lcd.begin(16, 2);
    lcd.clear();
}
void loop()
{
    digitalWrite(trigPin, LOW); // set trigPin as ouput pin of Arduino
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH); // calculation of distance of obstacle
    distance = (duration * 0.0343 / 2);
    lcd.setCursor(0, 0);
    lcd.print("Distance : "); // print distance on LCD
    lcd.print(distance);
    lcd.print(" cm ");
    delay(1000);
}