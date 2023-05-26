//two different functions used here, called one after another but every iteration calls each function once, which makes it look like both codes are run simultaneously

int zf1 = 2;
int vr1 = 3;
int sensor1a = 7;
int sensor1b = 8;

int zf2 = 5;
int vr2 = 6;
int sensor2a = 9;
int sensor2b = 10;

int pwm1=65, pwm2=65;
int a, b, c, d;
long counter1=0, counter2=0;
float angle1, angle2;

void setup(){
  pinMode(zf1, OUTPUT);
  pinMode(zf2, OUTPUT);

  pinMode(sensor1a, INPUT_PULLUP);
  pinMode(sensor1b, INPUT_PULLUP);
  pinMode(sensor2a, INPUT_PULLUP);
  pinMode(sensor2b, INPUT_PULLUP);

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

  //Frequency change of pins 9,10 to 4k
  int myEraser3 = 7; 
  TCCR2B &= ~myEraser3;
  int myPrescaler3 = 2;
  TCCR2B |= myPrescaler3;
}

//run for motor 1 to given counter
void motor_run1(long count1) {
  a = digitalRead(sensor1a);
  //Serial.print(sensor);
  if ((a==HIGH)&&(b==LOW)||(a==LOW)&&(b==HIGH)){
    counter1 ++;
    angle1 = (counter1*360)/200;
    if(counter1 <=count1){
      analogWrite(vr1, pwm1);
      digitalWrite(zf1,HIGH);
      Serial.print("m1-");
      Serial.print(counter1);
      Serial.println();
    } 
    else{
      analogWrite(vr1, 0);
    }
  b = a;
  }
}


//run for motor 2 to given counter single channel
void motor_run2(long count2) {
  c = digitalRead(sensor2a);
  //Serial.print(sensor);
  if ((c==HIGH)&&(d==LOW)||(c==LOW)&&(d==HIGH)){
    counter2 ++;
    angle2 = (counter2*360)/200;
    if(counter2 <=count2){
      analogWrite(vr2, pwm2);
      digitalWrite(zf2,HIGH);
      Serial.print("m2-");
      Serial.print(counter2);
      Serial.println();
    } 
    else{
      analogWrite(vr2, 0);
    }
  d = c;
  }
}

void loop(){

  motor_run1(20);
  //delay(500);

  motor_run2(20);
  //delay(500);
  
}