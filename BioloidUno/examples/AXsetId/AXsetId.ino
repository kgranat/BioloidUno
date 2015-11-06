#include <ax12Uno.h>

#define OLD_SERVO_ID 1

#define NEW_SERVO_ID 2

int servoPosition;

void setup()
{
  delay(10);
  ax12SetRegister(OLD_SERVO_ID, AX_ID, NEW_SERVO_ID); //set old servo id to new servo id
  delay(10);
    
 }
void loop()
{
  for(servoPosition = 0; servoPosition <= 1034; servoPosition++)
 {
    SetPosition(NEW_SERVO_ID, servoPosition);
    delay(50);
 }
 
 for(servoPosition = 1023; servoPosition >= 0; servoPosition--)
 {
    SetPosition(NEW_SERVO_ID, servoPosition);
    delay(50);
 }

    
}



