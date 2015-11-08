Bioloid Uno

DYNAMIXEL 1.0 library for the Arduino Uno, Geekduino, or any Arduino using `Serial`

Installation - Put the `BioloidUno` in your libraries folder

Usage - File -> Examples -> BioloidUno -> AXSimpleTestUno 
	Pan servo 1 back and forth
	File -> Examples -> BioloidUno -> AXsetId 
	Change the ID of a servo (only plug one servo in at a time
	
Hardware
	Connect the VDD/GND pins to 12v and the GND to your Arduino GND pin. Connect the data pin to your Arduino's TX pin
	http://support.robotis.com/en/images/product/dynamixel/ax_series/ax_series_pin.png
	
	
This library does not support reading data from DYNAMIXELS at this time - coming soon.

Based on ArbotiX libraries.
https://github.com/interbotix/arbotix