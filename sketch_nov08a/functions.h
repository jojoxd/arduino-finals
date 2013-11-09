/* all functions, excluded       ||
|| translate_IR()                ||
|| - mostly used for remote      ||
|| control                       */

void moveServo(int pos1 = 0, int delayMS1 = 750){
  myservo.write(pos1);
  delay(delayMS1);
}

void setRelay(boolean lr, boolean rr, boolean fwrd, int delayMS = 0){
  if(lr == true){
    digitalWrite(left_relay, HIGH);
  }
  else{
    digitalWrite(left_relay, LOW);
  }
  if(rr == true){
    digitalWrite(right_relay, HIGH);
  }
  else{
    digitalWrite(right_relay, LOW);
  }
  if(fwrd == true){
    digitalWrite(frev_relay, LOW);
  }
  else{
    digitalWrite(frev_relay, HIGH);
  }
}

void toggle(bool, pin, button = "null"){
  bool = !bool;
  Serial.print(". -> "); Serial.println(button); Serial.print(" -> ");
  if(bool == true){
    Serial.println(button + " == ON");
    digitalWrite(pin, HIGH);
  }
  else{
    Serial.println(button + " == OFF");
    digitalWrite(pin, LOW);
  }
}
