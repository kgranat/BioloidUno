#include <ax12Uno.h>

#define SERVO_ID 1

int servoPosition;

void setup()
{
    ax12Init(1000000);  
 }
void loop()
{
  for(servoPosition = 0; servoPosition <= 1024; servoPosition++)
 {
    SetPosition(SERVO_ID, servoPosition);
    delay(10);
 }
 
 for(servoPosition = 1023; servoPosition >= 0; servoPosition--)
 {
    SetPosition(SERVO_ID, servoPosition);
    delay(10);
 }

    
}



