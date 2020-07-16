int switch1;
void setup()
{
  pinMode(11, OUTPUT);
    pinMode(8, OUTPUT);
      pinMode(1, INPUT);


}

void loop()
{
  switch1 = digitalRead(1);
  if (switch1 ){
  digitalWrite(8, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  else {digitalWrite(8, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, HIGH);
        delay(1000); // Wait for 1000 millisecond(s)
       }
}