//increase the counter value and print it


//pins should be only 2,3,5 because TCCR3B

int zf = 3;
int vr = 2;
int sensor = 18;

int pwm = 65;
bool a ;
bool b = 0;
long counter = 0;
int angle_counter=0;
int angle;
int total_angle;
int angle_new;

void setup() {
  pinMode(zf, OUTPUT);
  // analogWrite(vr, pwm);
  digitalWrite(zf, HIGH);
  pinMode(sensor, INPUT);
  attachInterrupt(digitalPinToInterrupt(sensor), interrupt, CHANGE);  
  Serial.begin(115200);
  int myEraser = 7; // this is 111 in binary and is used as an eraser
  TCCR3B &= ~myEraser; // this operation (AND plus NOT), set the three bits in TCCR2B to 0
  int myPrescaler = 2; // this could be a number in [1 , 6]. In this case, 3 corresponds in binary to 011.
  TCCR3B |= myPrescaler; //this operation (OR), replaces the last three bits in TCCR2B with our new value 011
}

void loop() {
  // a = digitalRead(sensor);
  // if ((a==HIGH)&&(b==LOW)||(a==LOW)&&(b==HIGH)){
  //   counter++;
  //   angle = (counter*360)/200;
  //   if(angle<=900){
  //     analogWrite(vr, pwm);
  //     Serial.print(counter);
  //     Serial.println();
  //   } 
  //   else{
  //     analogWrite(vr, 0);
  //   }
  //   b = a;
  // }
}

void interrupt(){
  counter++;
    angle = (counter*360)/200;
    if(counter<=500){
      analogWrite(vr, pwm);
      Serial.print(counter);
      Serial.println();
    } 
    else{
      analogWrite(vr, 0);
    }
    b = a;  
}