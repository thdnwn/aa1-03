int pinNum = 13; // D13
void setup() 
{
  // put your setup code here, to run once:
  pinMode(pinNum, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(pinNum, HIGH);
  delay(3000);
  digitalWrite(pinNum, LOW);
  delay(3000);
}
