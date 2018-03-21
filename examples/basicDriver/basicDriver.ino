#include <MotorDriver.h>


MotorDriver m;


void setup()
{

}


void loop()
{
  m.motor(1,FORWARD,255);
  m.motor(4,FORWARD,255);  

}