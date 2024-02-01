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