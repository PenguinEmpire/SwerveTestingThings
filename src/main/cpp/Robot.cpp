/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"

#include <iostream>

#include <frc/smartdashboard/SmartDashboard.h>

void Robot::RobotInit() {
  frc::Rotation2d pi{units::radian_t(PI)};
  frc::Rotation2d twoPi{units::radian_t(2 * PI)};
  frc::Rotation2d threePi{units::radian_t(3 * PI)};
  frc::Rotation2d negPi{units::radian_t(-PI)};
  frc::Rotation2d neg1p5Pi{units::radian_t(1.5 * -PI)};
  
  printf("pi: %f", pi.Degrees().to<double>());
  printf("twoPi: %f", twoPi.Degrees().to<double>());
  printf("threePi: %f", threePi.Degrees().to<double>());
  printf("negPi: %f", negPi.Degrees().to<double>());
  printf("neg1p5Pi: %f", neg1p5Pi.Degrees().to<double>());

  frc::Rotation2d twoTimesPi = pi * 2;
  frc::Rotation2d twoTimesTwoPi = twoPi * 2;
  frc::Rotation2d twoTimesThreePi = threePi * 2;
  frc::Rotation2d twoTimesNegPi = negPi * 2;
  frc::Rotation2d twoTimesNeg1p5Pi = neg1p5Pi * 2;

  printf("twoTimesPi: %f", twoTimesPi.Degrees().to<double>());
  printf("twoTimesTwoPi: %f", twoTimesTwoPi.Degrees().to<double>());
  printf("twoTimesThreePi: %f", twoTimesThreePi.Degrees().to<double>());
  printf("twoTimesNegPi: %f", twoTimesNegPi.Degrees().to<double>());
  printf("twoTimesNeg1p5Pi: %f", twoTimesNeg1p5Pi.Degrees().to<double>());

  pi += twoPi;

  printf("piPlusEqTwoPi: %f", pi.Degrees().to<double>());
  
}

/**
 * This runs after the mode specific periodic functions, but before LiveWindow and SmartDashboard integrated updating.
 */
void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {}

void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic() {}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
