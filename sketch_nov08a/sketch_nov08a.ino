/* import needed libraries       */
#include "header.h"
#include "IRremote.h"
#include "Servo.h"
#include "DigitalToggle.h"

/* declare objects:              */
IRrecv irrecv(receiver);
decode_results results;
//ServoTimer2 myservo;
Servo myservo;

/*                               */
#include "functions.h"
#include "translate_IR.h"

#include "setup.h"

#include "loop.h"
