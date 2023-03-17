#ifndef Sevclass_h // if not defined
#define Sevclass_h //define libary
#include <Arduino.h>
class SevenDisplay{ //make class
private: //private pin
    int *pins;
  public: // public constructor
    SevenDisplay();
    SevenDisplay(int pins[7]);
    void init(); // initialise
    void display(int num);
};

#endif
