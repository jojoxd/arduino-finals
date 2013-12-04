Arduino Robot project
=====================

## usage: ##
###### functions @ functions.h ######

Move Servo:
```Objective-C
moveServo(position, [delay]);
```

Set the relay to move left, right; forward, backward:
```Objective-C
setRelay(leftrelay, rightrelay, directionrelay, [delay]);
```

Toggle a pin:
```Objective-C
toggle(pin, "string/name from button");
```

###### translateIR @ translate_IR.h ######
switch for the remote control; not much to explain here.

## Libraries ##
###### You need these libraries ######
http://playground.arduino.cc/Code/DigitalToggle (#include "DigitalToggle")

http://github.com/shirriff/Arduino-IRremote (#include "IR-Remote")