int pwm = 0;
int led = 3; // D3
void setup() 
{
  // 아날로그 출력에서 핀 모드 설정이 필요 없다.
}

void loop() 
{
  // put your main code here, to run repeatedly:
  pwm = random(0, 255);
  pwmLed(led, pwm);
}

void pwmLed(int led, int pwmValue)
{
  analogWrite(led, pwmValue);
  delay(200);
 }
