//this code works. the hip motor is actuated first, making the hip go up until it touches the limit switch, once the switch is detected, the direction is switched and then made touch the other limit switch.

//this action is simultaneously done with the knee motor as well



int vr1 = 2;
int zf1 = 3;
int vr2 = 5;
int zf2 = 6;
int pwm1=120, pwm2=80;
int limit1a = 9 ;
int limit1b = 10;
int limit2a = 11;
int limit2b = 12;
int a,b,c,d;

void setup() {
  pinMode(zf1, OUTPUT);
  pinMode(zf2, OUTPUT);
  pinMode(limit1a, INPUT_PULLUP);
  pinMode(limit1b, INPUT_PULLUP);
//pinMode(limit2a, INPUT_PULLUP);
//pinMode(limit2b, INPUT_PULLUP);
  
  //pinMode(limit2, INPUT);

  Serial.begin(9600);

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

void hip_swing(){
  analogWrite(vr1,pwm1);
  digitalWrite(zf1,HIGH);
  //Serial.println("fw swinging");
  delay(3000);
}

void knee_swing(){
  analogWrite(vr2, pwm2);
  digitalWrite(zf2, LOW);
  //Serial.println("fw knee swinging");
  delay(3000);
}

void loop() {
  a=digitalRead(limit1a);
  Serial.print(a);
  Serial.println("a");

  b=digitalRead(limit1b); 
  Serial.print(b);
  Serial.println("b");

  c=digitalRead(limit2a);
  Serial.print(c);
  Serial.println("c");

  d=digitalRead(limit2b);
  Serial.print(d);
  Serial.println("d");


  if ((a==HIGH) || (b==HIGH)){
    analogWrite(vr1,pwm1);
    digitalWrite(zf1,LOW);
    //Serial.println("bw swinging");
  }

  else if (a==LOW){
      hip_swing();
    }

  if ((c==HIGH) || (d==HIGH)){
    analogWrite(vr2, pwm2);
    digitalWrite(zf2, HIGH);
    //Serial.println("bw knee swinging");
  }
  else if (c==LOW){
    knee_swing();
  }
  }


    // analogWrite(vr2,pwm2);
    // digitalWrite(zf2,LOW);
    // delay(1500);
    // digitalWrite(zf1, LOW);
    //digitalWrite(zf2, HIGH);
  // }
  // else{
  //   analogWrite(vr2,0);
  //   // analogWrite(vr2,0);
  //   while(1){
  //     Serial.println("off");
  //     ;
  //   }                       
  // }
