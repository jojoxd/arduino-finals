void setup(){
  Serial.begin(9600);
  step1.setSpeed(60); // Set stepper speed to 60rpm
  irrecv.enableIRIn();
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  myservo.attach(7);
  moveServo();
  moveServo(180);
  moveServo();
  Serial.println("setup complete (project: sketch_nov08a):");
  Serial.print(" - running using header version: "); Serial.println(version_header);
  Serial.print(" - running using loop version:   "); Serial.println(version_loop);
  Serial.print(" - running using setup version:  "); Serial.println(version_setup);
  Serial.print(" - running using setup version:  "); Serial.println(version_translate_IR);
  Serial.println(" - licensed with lgpl - Joey Vos(November '13)");
}
