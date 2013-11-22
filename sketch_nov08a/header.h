/* header file for sketch_nov08a ||
|| import needed libraries:      */
#include "Arduino.h"

/* declare constants:            */
const int receiver = 11;
const int right_relay = 2;
const int left_relay = 3;
const int frev_relay = 4;

/* declare variables             */
int pos = 0;
boolean debug = true;

const String version_header = "1.1";
const String version_loop = "1.2";
const String version_setup = "1.2";
const String version_translate_IR = "1.4";
