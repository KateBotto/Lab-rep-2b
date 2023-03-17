// puch button class h

#ifndef pb_h // if not defined
#define pb_h // define library
#include <Arduino.h> // add libray
class pb{ // make pb class
private: // private pin
int pin;
bool Stopper=0;
int counter=0;
bool state;
public: // make public constructor
pb(); // constructor
pb(int pin); // actual construtor

void init(); // inital 
bool pressed();
int count();
void print();
};


#endif
