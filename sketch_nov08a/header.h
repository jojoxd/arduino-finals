/* header file for sketch_nov08a ||
|| import needed libraries:      */
#include "Arduino.h"

/* declare constants:            */
const int receiver = 11;
const int right_relay = 2;
const int left_relay = 3;
const int frev_relay = 4;
const int stepPin1 = 5;
const int stepPin2 = 6;
const int stepPin3 = 7;
const int stepPin4 = 8;


/* declare variables             */
int pos = 0;
boolean debug = false;
String last = "undefined";
const int stepsPerRev = 200;


/* declare all version strings   */
const String version_header = "2.1";
const String version_loop = "2.1";
const String version_setup = "2.1";
const String version_translate_IR = "2.1";
