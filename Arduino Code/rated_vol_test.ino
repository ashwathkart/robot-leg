//the rated voltage was found using the mathematical relationship of KV to volts, and then the theoretical value of rpm was compared with the value from the tachometer, for the same pwm. the results were within an allowable tolerance and so, the same value, with the offset, was used


//For motor 1 (hip joint)
int vr1 = 2;
int zf1 = 3;
int sensor1 = 5;
float pwm1;
float degree;
bool a ;
bool b ;
long counter1 = 0;
int angle1;
int speed1;
int direction1;

//For motor 2 (knee joint)
int vr2 = 6;
int zf2 = 7;
int sensor2 = 8;
int pwm2;
bool c ;
bool d ;
long counter2 = 0;
int angle2;
int speed2;
int direction2;


void setup() {
  pinMode(zf1, OUTPUT);
  pinMode(zf2, OUTPUT);
  digitalWrite(zf1, HIGH);
  digitalWrite(zf2, HIGH);
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
  void m1_run (float pwm1,float degree){
    a = digitalRead(sensor1);
    if ((a==HIGH)&&(b==LOW)||(a==LOW)&&(b==HIGH)){
      counter1 ++;
      angle1 = (counter1 *360)/200;
      if(angle1 <=degree){
        analogWrite(vr1, pwm1);
        Serial.print(counter1);
        Serial.println();
      } 
      else{
        analogWrite(vr1, 0);
      }
      b = a;
    }
  }

  //motor2
  void m2_run (int speed2,int direction2){
    c = digitalRead(sensor2);
    if ((c==HIGH)&&(d==LOW)||(c==LOW)&&(d==HIGH)){
      counter2 ++;
      angle2 = (counter2 *360)/200;
      if(counter2 <=200){
        analogWrite(vr2, pwm2);
        Serial.print(counter2);
        Serial.println();
      } 
      else{
        analogWrite(vr2, 0);
      }
      c = d;
    }
  }


void loop() {
  m1_run(65,30);
}

