//pb class cpp

#include "pb.h"

pb::pb(int pin){
this->pin = pin; //make pin = pin
}
void pb::init(){ // initialize pb
  pinMode(pin, INPUT_PULLUP); //button = input pullup
  Serial.begin(9600); //start serial monitor
}


bool pb::pressed(){
  // read the state of the switch into a local variable: 
  //check if button was pressed
  int debounceDelay = 50;
  int lastDebounceTime;
  bool buttonState;
  bool lastButtonState = 0;
  bool reading = !digitalRead(pin); //!=not

  // If the switch changed since last result
  if (reading != lastButtonState) {
    // reset debouncing timer
   unsigned long lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    //
    // whatever the reading is at, it's been there for longer than the debounce
    // delay, so take it as the actual current state:

    // if the button state has changed:
    if (reading != buttonState) {
      buttonState = reading;
     
    }
  }

  
  // save the reading of button
  lastButtonState = reading;
state = buttonState;
  return buttonState;
}
int pb::count(){

if(state==1 && Stopper == 0){// if button is pressed value is 0, activates once then off
  Stopper = 1;// stopper true
    counter++;
    }
    if(state==0) { //if button is not pressed it is activated continuousl
      Stopper = 0; // stoper false
    }
return counter; //reset counter



}



void pb::print(){
Serial.print("State =");
Serial.println(state);
Serial.print("Counter =");
Serial.println(counter);
}
