//this will actuate a single motor to spin at particular rpm based on the pwm values, this was used for no load testing


int ZF = 2;  // ZF 
int VR = 3;    //VR
int Signal = 5;    //signal
int values = 0;
int counter = 0;

void setup() {

  // put your setup code here, to run once:
  Serial.begin(115200);

  //wheel 1 - Setup pin mode  
  pinMode(ZF, OUTPUT); //direction  - ZF
  pinMode(Signal, INPUT);
  int myEraser = 7; // this is 111 in binary and is used as an eraser
  TCCR3B &= ~myEraser; // this operation (AND plus NOT), set the three bits in TCCR2B to 0
  int myPrescaler = 2; // this could be a number in [1 , 6]. In this case, 3 corresponds in binary to 011.
  TCCR3B |= myPrescaler; //this operation (OR), replaces the last three bits in TCCR2B with our new value 011

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(VR,150);
  digitalWrite(ZF,HIGH);
  delay(2000);
  analogWrite(VR,0);
  //analogWrite(VR, 0);
  //digitalWrite(ZF, LOW)

}
