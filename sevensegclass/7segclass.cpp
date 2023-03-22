//cpp sev segment class
#include "Sevclass.h" // add library

SevenDisplay::SevenDisplay(int pins[7]){ // sev seg
  this->pins = pins;
}


void SevenDisplay::init() { // for loop to make pins outputs
        for (int i = 0; i < 8; i++) {
            pinMode(pins[i], OUTPUT);
        }}

void SevenDisplay::display(int num){
  
  int numbers[10][7] = { // array the digits of a 7 segment display (row = digit, column = segment)
{1, 1, 1, 1, 1, 1, 0},
{0, 1, 1, 0, 0, 0, 0},
{1, 1, 0, 1, 1, 0, 1},
{1, 1, 1, 1, 0, 0, 1},
{0, 1, 1, 0, 0, 1, 1},
{1, 0, 1, 1, 0, 1, 1},
{1, 0, 1, 1, 1, 1, 1},
{1, 1, 1, 0, 0, 0, 0},
{1, 1, 1, 1, 1, 1, 1},
{1, 1, 1, 1, 0, 1, 1}
        };

        for (int i = 0; i < 7; i++) { // use for loop for pins
            digitalWrite(pins[i], numbers[num][i]);
        }
        }
