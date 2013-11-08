/* import needed libraries       */
#include "header.h"
#include "IRremote.h"
#include "Servo.h"

/* declare objects:              */
IRrecv irrecv(receiver);
decode_results results;
Servo myservo;

/*                               */
#include "translate_IR.h"

#include "setup.h"

#include "loop.h"
