#include <Servo.h>
int x;
int y;
Servo servo_6;
Servo servo_5;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  servo_6.attach(6);
servo_5.attach(5);
  pinMode(A5, INPUT);
  pinMode(8,INPUT);
}

void loop()
{
  
 int sensorValue = analogRead(A5);
 int switch1=digitalRead(8);
  if (switch1) { 
  int x= map(sensorValue,0,1023,0,180);
    int value;
    servo_6.write(value);
      delay(50);

   Serial.println("the new value is ");
    Serial.print("true");
     value = x;
    }
  else { y = map(sensorValue,0,1023,0,180); 
        servo_5.write(y); 
        delay(50);
Serial.println("else");} 
  
 
 
}