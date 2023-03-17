// push button class .ino

#include "pb.h" // include library

pb push(2); // push 2

void setup() {
  // put your setup code here, to run once:
push.init(); // initial
}

void loop() {
  // put your main code here, to run repeatedly:
  push.pressed();
  push.count();
  push.print();
}
