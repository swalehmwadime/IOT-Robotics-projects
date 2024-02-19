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