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