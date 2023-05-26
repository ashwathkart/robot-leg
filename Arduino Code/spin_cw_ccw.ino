//spin, stop, change direction and spin again

const int zf = 3;
const int vr = 2;
int sensor = 5;

//int pwm = 45;
int a = 0;
int b = 1;
int counter = 0;
float angle;

void setup() {
  pinMode(zf, OUTPUT);
  pinMode(sensor, INPUT);
  //digitalWrite(zf, HIGH);
  //analogWrite(vr, pwm);
  Serial.begin(115200);
  int myEraser = 7; // this is 111 in binary and is used as an eraser
  TCCR3B &= ~myEraser; // this operation (AND plus NOT), set the three bits in TCCR2B to 0
  int myPrescaler = 2; // this could be a number in [1 , 6]. In this case, 3 corresponds in binary to 011.
  TCCR3B |= myPrescaler; //this operation (OR), replaces the last three bits in TCCR2B with our new value 011
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) { // check if there is incoming serial data
    char incoming = Serial.read(); // read the incoming byte
    if (incoming == 'a') { // if the incoming byte is 'a'
      Serial.println("Received 'a', stopping motor");
      analogWrite(vr,0); // stop the motor
    }
  }
  else {
    digitalWrite(zf, HIGH);
    analogWrite(vr, 65);
    delay(2000);

    analogWrite(vr, 0);
    delay(2000);

    digitalWrite(zf, LOW);
    analogWrite(vr, 65);
    delay(2000);
  
    analogWrite(vr, 0);
    delay(2000);
  }
}
