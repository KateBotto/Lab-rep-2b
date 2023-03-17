// motor class

#include "Motorclass.h"// include header file

Movement(int x, int y, int z, int a){ //Defining a function named base with int inputs x, y, z, a.
  analogWrite(5, x);                     // left speed
  analogWrite(6, y);                     //right speed
  digitalWrite(7, z);                    // left forward and reverse
  digitalWrite(8, a);                    // right forward and reverse
  digitalWrite(3, 1); }              

void Car::init(){// defining init method
pinMode(5,OUTPUT);// set pin as output
pinMode(6,OUTPUT);//  set pin as output
pinMode(7,OUTPUT);//  set pin as output
pinMode(8,OUTPUT);//  set pin as output
pinMode(3,OUTPUT);//  set pin as output
}
void Car::move(String Direction, int speed){//define move / arguments DIR and Speed
  this->Direction = Direction;//  dir equal to private dir
  this->speed = speed;// speed equal to private speed

if(Direction == "forwards"){//if the string is "forwards"
   Movement(speed, speed, 1, 1);}//call the function

if(Direction == "backwards"){//if the string is "backwards"
   Movement(speed, speed, 0, 0); }//call the function

if(Direction == "right"){//if the string is "right"
   Movement(speed/2, speed, 0, 1);}//call the function

if(Direction == "left"){//if the string is "left"
  Movement(speed, speed/2, 1, 0);}//call the function
 }



void Car::Forwards(int speed){//defining the forward method
  Movement(speed, speed, 1, 1);}//call the movment function

void Car::Backwards(int speed){//defining the backwards method
 Movement(speed, speed, 0, 0);}//call the movment function

void Car::Left(int speed){//defining the left method
  Movement(speed, speed/1.5, 1, 0);}//call the movment function

void Car::Right(int speed){ //defining the right method
   Movement(speed/1.5, speed, 0, 1);}//call the movment function

 void Car::STOP(){          
  analogWrite(5, 0);   // all pins low to stop the car
  analogWrite(6, 0);   
  digitalWrite(7, 0);  
  digitalWrite(8, 0);   
  digitalWrite(3, 0); }
