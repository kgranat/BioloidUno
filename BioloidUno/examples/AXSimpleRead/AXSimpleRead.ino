#include <ax12Uno.h>

#define SERVO_ID 1


//include the I2C Wire library - needed for communication with the I2C chip attached to the LCD manual 
#include <Wire.h> 
// include the RobotGeekLCD library
#include <RobotGeekLCD.h>


// create a robotgeekLCD object named 'lcd'
RobotGeekLCD lcd;
int i;

int goalServoPosition = 0;
int servoPosition;

void setup()
{
    ax12Init(1000000);  
  
  
  // initlaize the lcd object - this sets up all the variables and IIC setup for the LCD object to work
  lcd.init();
  // Print a message to the LCD.
  lcd.print("Hello, DYNAMIXEL!");
  delay(1000);
 }
void loop()
{
  
  goalServoPosition = (goalServoPosition + 100) % 1023;
  SetPosition(SERVO_ID, goalServoPosition);
  delay(1000);
  
  servoPosition = GetPosition(SERVO_ID);
  
  lcd.setCursor(0, 0);
  lcd.print("G Pos:"); //goal position
  lcd.print(goalServoPosition);
  lcd.print("     ");
  lcd.setCursor(0, 1);
  
  lcd.print("P Pos:  ");//present position
  lcd.print(servoPosition);
  
  delay(1000);
  
  
  
    
}



