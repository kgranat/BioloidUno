#include <ax12Uno.h>
#include <BioloidControllerUno.h>

#define SERVO_ID 1

// create a robotgeekLCD object named 'lcd'
RobotGeekLCD lcd;
int i;

int goalServoPosition = 0;
int servoPosition;

BioloidController bioloid = BioloidController(1000000);  //create a bioloid object at a baud of 1MBps

void setup()
{
  
    bioloid.poseSize = 1;//2 servos, so the pose size will be 2
  bioloid.readPose();//find where the servos are currently
  bioloid.setNextPose(1,512);//prepare the PAN servo to the centered position, pan/2048

  bioloid.interpolateSetup(2000);//setup for interpolation from the current position to the positions set in setNextPose, over 2000ms
  while(bioloid.interpolating > 0)  //until we have reached the positions set in setNextPose, execute the instructions in this loop
  {
    bioloid.interpolateStep();//move servos 1 'step
    delay(3);
  }
  
  
 }
void loop()
{
  
 
  
  
  
    
}



