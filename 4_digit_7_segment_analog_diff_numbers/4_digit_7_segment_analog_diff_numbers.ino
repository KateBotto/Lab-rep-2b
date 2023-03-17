const int latch = A0; 
const int cp = 12; 
const int data = 13; //pin to pass the information
const int dPins[4] = {A4, A1, A2, A5}; //pins that control the digits

const byte digits[10] = { //determine which pins to be on or off to display numbers
  B00111111, // 0
  B00000110, // 1
  B01011011, // 2
  B01001111, // 3
  B01100110, // 4
  B01101101, // 5
  B01111101, // 6
  B0000111,  // 7
  B01111111, // 8
  B01101111, // 9
};

void setup() {
  pinMode(latch, OUTPUT);
  pinMode(cp, OUTPUT);
  pinMode(data, OUTPUT);

  pinMode(A4, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A5, OUTPUT);
  
}

void loop() {
 //digit 1
  analogWrite(A4, 255);
  analogWrite(A1, 255);
  analogWrite(A2, 255);
  analogWrite(A5, 0);
  analogWrite(latch, 0);
  shiftOut(data, cp, MSBFIRST, digits[3]);
  analogWrite(latch, 255);
  
  delay(5);

   //digit 2
  analogWrite(A4, 255);
  analogWrite(A1, 255);
  analogWrite(A2, 0);
  analogWrite(A5, 255);

  analogWrite(latch, 0);
  shiftOut(data, cp, MSBFIRST, digits[1]);
  analogWrite(latch, 255);
  
  delay(5);

   //digit 3
  analogWrite(A4, 255);
  analogWrite(A1, 0);
  analogWrite(A2, 255);
  analogWrite(A5, 255);
  
  analogWrite(latch, 0);
  shiftOut(data, cp, MSBFIRST, digits[7]);
  analogWrite(latch, 255);
  
  delay(5);

  //digit 4
  analogWrite(A4, 0);
  analogWrite(A1, 255);
  analogWrite(A2, 255);
  analogWrite(A5, 255);
  
  analogWrite(latch, 0);
  shiftOut(data, cp, MSBFIRST, digits[6]);
  analogWrite(latch, 255);
  
  delay(5); 
}
