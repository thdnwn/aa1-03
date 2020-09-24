int pwm = 0;
int led = 3; // D3
void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  pwm = random(0, 255);
  pwmLed(led, pwm);

  Serial.print("AA0313, LED: ");
  Serial.println(pwm);
  delay(10);
}

void pwmLed(int led, int pwmValue)
{
  analogWrite(led, pwmValue);
  delay(10);
 }
