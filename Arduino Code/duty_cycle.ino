//it spins, but speed does not change

int pin = 3;
int ZF = 13;
float pwm;
float frequency;
float on_duty;
float off_duty;

void setup() {
  // put your setup code here, to run once
  
  pinMode(pin, OUTPUT);
  pwm = 120;
  frequency = 10000;
  on_duty = (pwm*100)/(frequency*255);
  off_duty = ((255-pwm)*100)/(frequency*255);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin, HIGH);
  delayMicroseconds(50);
  digitalWrite(pin, LOW);
  delayMicroseconds(50);

}