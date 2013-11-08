void translateIR(){
  switch(results.value){
    case 0x20FF50AF:
      Serial.print(". -> On/Off -> ");
      IsOn = !IsOn;
      if(IsOn == true){
        Serial.println("IsOn == true");
        digitalWrite(13, HIGH);
      }
      else{
        Serial.println("IsOn == false");
        digitalWrite(13, LOW);
      }
      break;
    default:
      Serial.println(results.value, HEX);
      break;
  }
  delay(20);
}
