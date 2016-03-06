#include <ax12Uno.h>

//include the I2C Wire library - needed for communication with the I2C chip attached to the LCD manual 
#include <Wire.h> 
// include the RobotGeekLCD library
#include <RobotGeekLCD.h>

const int SERVO_ID = 1;

// create a robotgeekLCD object named 'lcd'
RobotGeekLCD lcd;
int i;

int torqueReading;

void setup()
{
    ax12Init(1000000);  //start library at 1mbps
    
    //set wheel mode, set cw and ccw angles to zero
      ax12SetRegister2(SERVO_ID, AX_CW_ANGLE_LIMIT_L, 0); // write two bytes to memory (ADDR, ADDR+1)
      ax12SetRegister2(SERVO_ID, AX_CCW_ANGLE_LIMIT_L, 0); // write two bytes to memory (ADDR, ADDR+1)
      
      
    //set joint mode, set cw and ccw angles to non zero
//      ax12SetRegister2(SERVO_ID, AX_CW_ANGLE_LIMIT_L, 0); // write two bytes to memory (ADDR, ADDR+1)
//      ax12SetRegister2(SERVO_ID, AX_CCW_ANGLE_LIMIT_L, 4095); // write two bytes to memory (ADDR, ADDR+1)

    //set speed
      ax12SetRegister2(SERVO_ID, AX_GOAL_SPEED_L, 1023); // write two bytes to memory (ADDR, ADDR+1)

      
  
  
  // initlaize the lcd object - this sets up all the variables and IIC setup for the LCD object to work
  lcd.init();
  // Print a message to the LCD.
  lcd.print("Hello, DYNAMIXEL!");
  delay(1000);
 }
void loop()
{
  torqueReading = ax12GetRegister(SERVO_ID, AX_PRESENT_LOAD_L, 2) ;// get the torque register, which is 2 bytes wide
  
  lcd.setCursor(0, 0);
  lcd.print("Torque:"); //goal position
  lcd.print(torqueReading);
  lcd.print("     ");
  
  delay(1000);
  
  
  
    
}



