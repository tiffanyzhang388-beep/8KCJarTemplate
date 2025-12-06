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

motor leftMotorLB = motor(PORT15, ratio6_1, false);
motor leftMotorLF = motor(PORT16, ratio6_1, false);
motor rightMotorRF = motor(PORT8, ratio6_1, false);
motor rightMotorRB = motor(PORT19, ratio6_1, false);
motor leftMotorLT1 = motor(PORT14, ratio6_1, false);
motor rightMotorRT2 = motor(PORT9, ratio6_1, false);
motor intakeL = motor(PORT1, ratio6_1, true);
motor intakeR = motor(PORT10, ratio6_1, true);

motor_group intake = motor_group( intake1, intake2);

digital_out pistonleft = digital_out( Brain.ThreeWirePort.A);


