#include "Arm.h"
#include "WPILib.h"
Arm::Arm() {

	raiseArm = new Jaguar(9);  //Creat jag arm motor
	xboxController = new Joystick(2);
}
void Arm::RaiseArm() {
	raiseArm->SetSpeed(1);
}
void Arm::LowerArm() {
	raiseArm->SetSpeed(-1);
}
void Arm::OperateArm() {
	if (xboxController->GetRawAxis(2) >= 0.0) {
		LowerArm();
	}
	else {
		RaiseArm();
	}
}