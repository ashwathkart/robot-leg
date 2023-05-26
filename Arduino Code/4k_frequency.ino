//this code uses the myEraser method to set the clock frequency of the particular pins


void setup() {

int myEraser = 7; // this is 111 in binary and is used as an eraser
TCCR3B &= ~myEraser; // this operation (AND plus NOT), set the three bits in TCCR2B to 0
int myPrescaler = 2; // this could be a number in [1 , 6]. In this case, 3 corresponds in binary to 011.
TCCR3B |= myPrescaler; //this operation (OR), replaces the last three bits in TCCR2B with our new value 011

digitalWrite(3, HIGH);

}

void loop() {
analogWrite(2,65); //use only 2,3,5 because it is TCCR3B :>
// put your main code here, to run repeatedly:

}