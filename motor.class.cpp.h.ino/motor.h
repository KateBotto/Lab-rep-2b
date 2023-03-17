
// motor class library

#ifndef Motorclass_h
#define Motorclass_h// define motor class
#include <Arduino.h>//include arduino default library

class Car {//define car class

private://make class private
String Direction;//
int speed;//speed variable
public:// public class
Car(){};//overload

void init();// initialize class

void move(String Dir, int speed);//move function

void Forwards(int speed);// car go forward
void Backwards(int speed);// car go backwards 
void Left(int speed);//turn car left 
void Right(int speed);//turn car right 
void STOP();// stop car
};


#endif
