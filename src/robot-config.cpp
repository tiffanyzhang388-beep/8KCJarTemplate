#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:


void vexcodeInit( void ) {
  // nothing to initialize
  
}



controller ControllerMain = controller(primary);

motor leftMotorLB = motor(PORT15 , ratio6_1, true); //left back
motor leftMotorLF = motor(PORT16, ratio6_1, true); //left front
motor leftMotorLT1 = motor(PORT14, ratio6_1, false); //left upside down

motor rightMotorRB = motor(PORT17, ratio6_1, false); //right back
motor rightMotorRF = motor(PORT8, ratio6_1, false); //right front
motor rightMotorRT1 = motor(PORT9, ratio6_1, true); //right upside down

motor intakeBottom = motor(PORT7, ratio6_1, true);
motor outtake = motor(PORT10, ratio6_1, true);

// motor_group intake = motor_group(intakeBottom, intakeTop);

digital_out scraper = digital_out(Brain.ThreeWirePort.A);
digital_out descorer = digital_out(Brain.ThreeWirePort.B);

//what the sigma 
