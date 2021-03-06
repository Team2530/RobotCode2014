#include "WPILib.h"
#include "LEDs.h"

#ifndef _MECANUMDRIVE_H
#define _MECANUMDRIVE_H
class MecanumDrive {

	Joystick *joystick;  //Driver joystick
	RobotDrive *myRobot;
	Victor *vic4;
	Victor *vic6;
	Victor *vic3;
	Victor *vic5;
	LEDs *robotLEDs;

public:
	MecanumDrive(LEDs *myLEDs);
	void Drive_FieldOriented(float mag, float dir, float twist, float angle);
	void Drive_RobotOriented(float mag, float dir, float twist);
	void GetJoystickValues(float &magnitude, float &direction, float &twist, float &throttle);
};
#endif
