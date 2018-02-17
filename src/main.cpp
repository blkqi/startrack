#include <AccelStepper.h>

#define gearTeethSpur 52
#define gearTeethPinion 16
#define stepsPerRevolution 4076 // 63.68395 * 64 (28BYJ-48)

#define motorPin1 8   // IN1 on the ULN2003 driver
#define motorPin2 9   // IN2 on the ULN2003 driver
#define motorPin3 10  // IN3 on the ULN2003 driver
#define motorPin4 11  // IN4 on the ULN2003 driver

AccelStepper stepper(AccelStepper::HALF4WIRE, motorPin1, motorPin3, motorPin2, motorPin4);

// Sidereal tracking:
// Radius (in inches) = 1 RPM / ((2 * PI / 1436) * (20 TPI)) ~= 11.427324914 inches
float motorSpeed = -1 * (gearTeethSpur / gearTeethPinion) * (stepsPerRevolution / 60);
int stepsMaximum = -1 * motorSpeed * 60 * 5;

void setup() {
  stepper.setMaxSpeed(motorSpeed);
  stepper.setSpeed(motorSpeed);
}

void loop() {
  if (stepper.currentPosition() < stepsMaximum) {
    stepper.runSpeed();
  } else {
    stepper.stop();
  }
}
