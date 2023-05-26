//pins should be only 2,3,5 because TCCR3B
int zf = 2;
int vr = 3;
int sensor = 6;

//int pwm = 45;
int a = 0;
int b = 0;
long counter = 0;
float angle;
int r=0;


void setup() {

  
  pinMode(zf, OUTPUT);
  pinMode(sensor, INPUT);
  pinMode(vr,INPUT);
  digitalWrite(zf, HIGH);
  //analogWrite(vr, pwm); 
  Serial.begin(9600);
  int myEraser = 7; // this is 111 in binary and is used as an eraser
  TCCR3B &= ~myEraser; // this operation (AND plus NOT), set the three bits in TCCR2B to 0
  int myPrescaler = 2; // this could be a number in [1 , 6]. In this case, 3 corresponds in binary to 011.
  TCCR3B |= myPrescaler; //this operation (OR), replaces the last three bits in TCCR2B with our new value 011

}
void loop() {
  //a = digitalRead(sensor);
  if (r==0)
  {
  analogWrite(vr, 65);
  delay(5000);
  Serial.print(r);
  Serial.println();
  r=1;
  }  
  if (r==1)
  {
  analogWrite(vr, 80);
  delay(5000);
  Serial.print(r);
  Serial.println();
  r=2;
  }  
  if (r==2)
  {
  analogWrite(vr, 0);
  delay(5000);
  Serial.print(r);
  Serial.println();
  r=3;
  }  
  if (r==3)
  {
  digitalWrite(zf,LOW); 
  analogWrite(vr, 65);
  delay(5000);
  Serial.print(r);
  Serial.println();
  r=4;
    }  
  if (r==4)
  {
  digitalWrite(zf,LOW); 
  analogWrite(vr, 0);
  delay(5000);
  Serial.print(r);
  Serial.println();
  }  
  
    //if (a!=b){
    //counter++;
    //angle = counter * 360 /200;
    //Serial.print(angle);
    //Serial.println();

    //if (angle>150){
      //analogWrite(vr, 0);
    //}
    //b = a;  
  //}
  }