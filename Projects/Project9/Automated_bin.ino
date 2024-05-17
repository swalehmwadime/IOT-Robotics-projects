#include <Servo.h>   

#define trigPin 7
#define echoPin 6
#define trigPin1 2
#define echoPin1 3
#define servo 9 
#define led 13 
#define Buzzer 10

  
Servo binservo;
int position = 0;

long duration;
float distance;

void setup(){
binservo.attach(servo);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT); 
pinMode(trigPin1, OUTPUT);
pinMode(echoPin1, INPUT); 
pinMode(led, OUTPUT);;
binservo.write(position);
pinMode(Buzzer, OUTPUT);
Serial.begin(9600);
while (! Serial);
Serial.println("Speed 0 to 255");
Serial.println("But use to 50 255 because minimum V required to start the motor is 50 ");


}
void loop(){
Serial.begin(9600);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);


duration = pulseIn(echoPin, HIGH);
distance = 0.03423*(duration/2);

if (distance<= 15)
{
  digitalWrite(led, HIGH);
  binservo.write(180); 
  delay(1500);
}else {
   digitalWrite(led, LOW);
  binservo.write(30);
  delay(10);
}
 delay(300);


  Serial.begin(9600);
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);

  duration = pulseIn(echoPin1, HIGH);
  distance = 0.03423*(duration/2);
  if (distance <= 15) {
    digitalWrite(Buzzer, HIGH);
    delay(5000);
  } else {
    digitalWrite(Buzzer, LOW);
    delay(10);
  }
  delay(300);
}
