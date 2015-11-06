#include <ax12Uno.h>

#define SERVO_ID 1

int servoPosition;

void setup()
{


    
    
 }
void loop()
{
  for(servoPosition = 0; servoPosition <= 1034; servoPosition++)
 {
    SetPosition(SERVO_ID, servoPosition);
    delay(50);
 }
 
 for(servoPosition = 1023; servoPosition >= 0; servoPosition--)
 {
    SetPosition(SERVO_ID, servoPosition);
    delay(50);
 }

    
}




