/*
Goal: implementation of car class
Themes: class
*/

#include "Motorclass.h"// include the library
Car myCar;//create object

void setup() {
  // put your setup code here, to run once:
myCar.init();//calling init / object myCar
}

void loop() {
  // put your main code here, to run repeatedly:

//call function and add delay 1 sec.
  
myCar.Forwards(100);
delay(1000);
myCar.STOP();
delay(1000);
myCar.Backwards(100);
delay(1000);
myCar.STOP();
delay(1000);
myCar.Left(100);
delay(1000);
myCar.STOP();
delay(1000);
myCar.Right(100);
delay(1000);
myCar.STOP();
delay(1000);
}
