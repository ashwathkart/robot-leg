//we use the millis() function to add the value of time over time, and thus stop the iteration at a particular value in milliseconds



int ZF = 13;  // ZF 
int VR = 4;    //VR

long prev = 0;
float rads = 0.00;
float degs = 0.00;
float pos = 0.00;
float new_pos = 0;
float new_pos_deg = 0;
int speed = 0;
float rpm = 0;
float radps = 0.00;

void setup() {

// put your setup code here, to run once:
Serial.begin(115200); 

pinMode(ZF, OUTPUT);
pinMode(VR, OUTPUT);

// input your desired values here:
degs = 60;
speed = 85;

rads = degs * 3.14/180;
rpm = speed * 15.36;
radps = rpm * 3.14 / 30;
}

void loop() {
  if (new_pos < rads) {
    analogWrite(VR, speed);
    digitalWrite(ZF, HIGH);
    long now = millis();
    //Serial.print(now, DEC);
    //Serial.println();

    new_pos += pos;
    pos = radps * (now-prev)/1000;
    prev = now;
    new_pos_deg = new_pos*180/3.14;

    Serial.print(new_pos_deg, DEC);
    Serial.println();
  } 
  else {
    analogWrite(VR, 0);
    digitalWrite(ZF, LOW);
  }
}
