//it spins, but speed does not change

int pin = 3;
int ZF = 13;

void setup() {
  // put your setup code here, to run once
  pinMode(pin, OUTPUT);
  //digitalWrite(ZF, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin, HIGH);
  delayMicroseconds(15);
  digitalWrite(pin, LOW);
  delayMicroseconds(85);
}