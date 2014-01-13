/* import needed libraries       */
#include "header.h"
#include "Stepper.h"
#include "IRremote.h"
#include "Servo.h"
#include "DigitalToggle.h"

/* declare objects:              */
IRrecv irrecv(receiver);
decode_results results;
Stepper step1(stepsPerRev, stepPin1, stepPin2, stepPin3, stepPin4);
//ServoTimer2 myservo;
Servo myservo;

/*                               */
#include "functions.h"
#include "translate_IR.h"

#include "setup.h"

#include "loop.h"
