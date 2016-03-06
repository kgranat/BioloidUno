#include <ax12Uno.h>
const int SERVO_ID = 254;
int servoPosition;

void setup()
{
  ax12Init(57600);  //intiialize at 57600 for mx servos
  delay(10);
  ax12SetRegister(SERVO_ID, AX_BAUD_RATE, 1); //set SERVO_ID's register AX_BAUD_RATE to '1' or 1000000
  delay(10);
  ax12Init(1000000); //re - intiialize at 1mbps for testing
    
 }
void loop()
{
  for(servoPosition = 0; servoPosition <= 1034; servoPosition++)
 {
    SetPosition(1, servoPosition);
    delay(50);
 }
 
 for(servoPosition = 1023; servoPosition >= 0; servoPosition--)
 {
    SetPosition(1, servoPosition);
    delay(50);
 }

    
}



