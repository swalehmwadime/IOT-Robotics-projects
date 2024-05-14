#define houseLED 10
#define streetLED 11
int light = 0; //store the current light value
 void setup(){
Serial.begin(9600);
pinMode(houseLED, OUTPUT);
pinMode(streetLED, OUTPUT);

 }

 void loop(){
 
 light = analogRead(A0); //read and save value

 Serial.println(light);
  if(light > 450) {//if it is bright..
  Serial.println("It is bright outside!");
  digitalWrite(houseLED, LOW);
  digitalWrite(streetLED, LOW);

  }
  else if(light > 229 && light <450) {//if there is average light
  Serial.println("It is quite bright outside");
  digitalWrite(houseLED, HIGH);
  digitalWrite(streetLED, LOW);
  }

  else {//If its dark..
  Serial.println("It is very dark!");
  digitalWrite(houseLED, HIGH);
  digitalWrite(streetLED, HIGH);
  }
  
  delay(1000);


 }
