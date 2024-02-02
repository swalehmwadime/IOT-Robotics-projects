#include <Servo.h>

//Define the Servo pin:
#define servoPin 9

//Create a new servo object:
Servo doorservo;

//Create a variable to store the servo position:
int position = 0;

void setup(){
//Attach the Servo variable to a pin;
doorservo.attach(servoPin);

}

void loop(){
//Tell the servo to go to a particular angle:
doorservo.write(90);
delay(500);
doorservo.write(180);
delay(500);
doorservo.write(0);
delay(500);

//SWeep from 0 to 180 degrees:
for(position = 0 ; position <= 180; position += 1){
   doorservo.write(position);
   delay(30);
   
}
//And back from 180 to 0 degrees:
for(position = 180; position >= 0; position -= 1){
   doorservo.write(position);
   delay(20);
   
}

delay(1000);

}