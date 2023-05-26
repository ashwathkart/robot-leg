//this code utilizes the method of case, i.e., we used 4 cases 0,1,2,3 and each of these meant reading of a and b correspond to (0,0) (0,1) (1,0) and (1,1) respectively.

//using this, we would determine the case shift between case_name_past and case_name_present to determine the direction of the rotation, i.e., if it moves from 0,0 to 0,1 it would be in anticlockwise and if it was the opposite, it would be in clockwise and so on

//apart from the direction we also had the need to find out the number of pulses that had passed to determine the angle. this was done just by simply checking if the a and b readings move from (1,1) to (0,0) to increase the counter and if it was the opposite then the counter would be reduced


int zf = 2;
int vr = 3;
int sensor1 = 7;
int sensor2 = 8;

int pwm=65;
int a, b;
bool cw;
int case_name, case_name_past=0, case_name_present;
long counter;
float angle;

void setup(){
  pinMode(zf, OUTPUT);
  // analogWrite(vr, pwm);
  digitalWrite(zf, HIGH);
  pinMode(sensor1, INPUT_PULLUP);
  pinMode(sensor2, INPUT_PULLUP);
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

void motor_run(long count,bool direction){

  a = digitalRead(sensor1);
  Serial.print(a);
  b = digitalRead(sensor2);
  Serial.print(b);
  Serial.println();

  // choose case name
  if(a==0 and b ==0){
    case_name = 0;    
  }
  else if(a==0 and b ==1){
    case_name = 1;    
  }
  else if(a==1 and b ==1){
    case_name = 2;    
  }
  else if(a==1 and b ==0){
    case_name = 3;    
  }

  case_name_present = case_name;
  //decide direction
  if ((case_name_present - case_name_past > 0) || (case_name_past == 3 && case_name_present == 0)){
  Serial.print("cw");
  }
  else if ((case_name_present - case_name_past < 0) || (case_name_past == 0 && case_name_present == 3)){
  Serial.print("anti-cw");
  }
  //counter code
  if((case_name_past == 0 && case_name_present == 2) || (case_name_past == 2 && case_name_present == 0)){
  // angle = (counter*360)/200;
    while(counter<=count){
      counter++;
      analogWrite(vr, pwm);
      digitalWrite(zf, direction);
      Serial.println(counter);
    }
  }
  case_name_past = case_name_present;
}

void loop(){

  motor_run(100,HIGH);
  delay(500);

  motor_run(100,LOW);
  delay(500);
  
}