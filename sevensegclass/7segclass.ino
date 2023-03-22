#include "Sevclass.h"

 int my7pins [7] {2,3,4,5,6,7,8};
 //int mypins [7] {9,10,11,12,13,14,15};

SevenDisplay my7(my7pins);
//SevenDisplay mydisplay(mypins);

void setup() {
  // put your setup code here, to run once:
my7.init();
//mydisplay.init ();
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i = 0; i < 10; ++i){
  my7.display(i);
  //mydisplay.display(i);
  delay(1000);
  }
}

