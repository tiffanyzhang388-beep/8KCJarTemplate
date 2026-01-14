using namespace vex;

extern brain Brain;

extern controller ControllerMain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:

extern motor leftMotorLB;
extern motor leftMotorLF;
extern motor rightMotorRB;
extern motor rightMotorRF;
extern motor leftMotorLT1;
extern motor rightMotorRT1;
extern motor intake1;
extern motor intake2;

extern motor_group intake;

extern digital_out top;



void  vexcodeInit( void );