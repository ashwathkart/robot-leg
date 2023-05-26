//code to run based on the serial input values


int command = 0;

//For motor 1 (hip joint)
int vr1 = 2;
int zf1 = 3;
int sensor1 = 8;
int pwm1 = 65;
bool a ;
bool b ;
long counter1 = 0;
int angle1;
int direction1;

//For motor 2 (knee joint)
int vr2 = 5;
int zf2 = 6;
int sensor2 = 10;
int pwm2;
bool c ;
bool d ;
long counter2 = 0;
int angle2;
int direction2;


void setup() {
  pinMode(zf1, OUTPUT);
  pinMode(zf2, OUTPUT);
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);

  Serial.begin(115200);

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
}

  //motor1
  void m1_run (int pwm1,char direction1){
    if (direction1="f"){
      digitalWrite(zf1, HIGH);
    }
    else if (direction1="b"){
      digitalWrite(zf1, LOW);
    }    
    a = digitalRead(sensor1);
    if ((a==HIGH)&&(b==LOW)||(a==LOW)&&(b==HIGH)){
      counter1 ++;
      angle1 = (counter1 *360)/200;
      if(counter1 <=200){
        analogWrite(vr1, pwm1);
        // Serial.print(counter1);
        // Serial.println();
      } 
      else{
        analogWrite(vr1, 0);
      }
      b = a;
    }
  }

  //motor2
  void m2_run (int pwm2,char direction2){
    if (direction2="f"){
      digitalWrite(zf2, HIGH);
    }
    else if (direction2="b"){
      digitalWrite(zf2, LOW);
    }
    c = digitalRead(sensor2);
    if ((c==HIGH)&&(d==LOW)||(c==LOW)&&(d==HIGH)){
      counter2 ++;
      angle2 = (counter2 *360)/200;
      if(counter2 <=200){
        analogWrite(vr2, pwm2);
        // Serial.print(counter2);
        // Serial.println();
      } 
      else{
        analogWrite(vr2, 0);
      }
      c = d;
    }
  }


void loop() {
  if (Serial.available()>0)
  {
    command=Serial.read();
    if (command = 1){
      analogWrite(vr1,0);
      analogWrite(vr2,0);
      Serial.print("Stopped");
    }
  }
  // m1_run(65,"f");
  // delay(1000);
  m2_run(45,"b");
  Serial.println(a);
  // Serial.println(c);

}