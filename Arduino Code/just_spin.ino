//spins and stops after counter runs out
int vr1 = 2;
int zf1 = 3;
int vr2 = 5;
int zf2 = 6;
int pwm1=80, pwm2=80;
int counter = 0;
int command=0;

void setup() {
  Serial.begin(115200); 
  pinMode(zf1,OUTPUT);
  pinMode(zf2,OUTPUT);

  //Frequency change of pins 2,3,5 to 4k
  int myEraser1 = 7; // this is 111 in binary and is used as an eraser
  TCCR3B &= ~myEraser1; // this operation (AND plus NOT), set the three bits in TCCR2B to 0
  int myPrescaler1 = 2; // this could be a number in [1 , 6]. In this case, 3 corresponds in binary to 011.
  TCCR3B |= myPrescaler1; //this operation (OR), replaces the last three bits in TCCR2B with our new value 011

  //Frequency change of pins 6,7,8 to 4k
  int myEraser2 = 7; 
  TCCR4B &= ~myEraser2;
  int myPrescaler2 = 2;
  TCCR4B |= myPrescaler2;

  //Frequency change of pins 10,9 to 4k
  int myEraser3 = 7; 
  TCCR2B &= ~myEraser3;
  int myPrescaler3 = 2;
  TCCR2B |= myPrescaler3;

  //Frequency change of pins 11,12 to 4k
  int myEraser4 = 7; 
  TCCR1B &= ~myEraser4;
  int myPrescaler4 = 2;
  TCCR1B |= myPrescaler4;
}

void loop() {
if (counter<10){
  analogWrite(vr1,pwm1);
  digitalWrite(zf1,HIGH);
  Serial.println(counter);
  counter++;
  
}
else if(counter>10||counter<20){
  analogWrite(vr1,pwm1);
  digitalWrite(zf1,LOW);
  Serial.println(counter);
  counter++;
  
}
else{
  analogWrite(vr1,0);
  analogWrite(vr2,0);
}
}
