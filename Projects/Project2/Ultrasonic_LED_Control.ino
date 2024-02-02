#define echo 12
#define trig 13

#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define LED5 6
#define LED6 7
#define LED7 8
#define LED8 9
#define LED9 10
#define LED10 11

int duration = 0;
int distance = 0;

void setup()
{
    Serial.begin(9600);
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);

    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);
    pinMode(LED5, OUTPUT);
    pinMode(LED6, OUTPUT);
    pinMode(LED7, OUTPUT);
    pinMode(LED8, OUTPUT);
    pinMode(LED9, OUTPUT);
    pinMode(LED10, OUTPUT);
}

void loop()
{
    digitalWrite(trig, HIGH);
    delay(1); // 1 ms
    digitalWrite(trig, LOW);

    duration = pulseIn(echo, HIGH);
    distance = (duration * 0.0343 / 2);
    Serial.println(distance);

    if (distance <= 5)
    {
        digitalWrite(LED1, HIGH);
    }
    else
    {
        digitalWrite(LED1, LOW);
    }

    if (distance <= 10)
    {
        digitalWrite(LED2, HIGH);
    }
    else
    {
        digitalWrite(LED2, LOW);
    }

    if (distance <= 15)
    {
        digitalWrite(LED3, HIGH);
    }
    else
    {
        digitalWrite(LED3, LOW);
    }

    if (distance <= 20)
    {
        digitalWrite(LED4, HIGH);
    }
    else
    {
        digitalWrite(LED4, LOW);
    }

    if (distance <= 25)
    {
        digitalWrite(LED5, HIGH);
    }
    else
    {
        digitalWrite(LED5, LOW);
    }

    if (distance <= 30)
    {
        digitalWrite(LED6, HIGH);
    }
    else
    {
        digitalWrite(LED6, LOW);
    }

    if (distance <= 35)
    {
        digitalWrite(LED7, HIGH);
    }
    else
    {
        digitalWrite(LED7, LOW);
    }

    if (distance <= 40)
    {
        digitalWrite(LED8, HIGH);
    }
    else
    {
        digitalWrite(LED8, LOW);
    }

    if (distance <= 45)
    {
        digitalWrite(LED9, HIGH);
    }
    else
    {
        digitalWrite(LED9, LOW);
    }

    if (distance <= 50)
    {
        digitalWrite(LED10, HIGH);
    }
    else
    {
        digitalWrite(LED10, LOW);
    }
}