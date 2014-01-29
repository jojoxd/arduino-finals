void translateIR(){
  switch(results.value){
    case 0x20FF50AF: // on/off
      toggle(13, "led_13");
      break;
      
    case 0x20FF30CF: // mute
      break;
    
    
    case 0x20FF8877: // 1
      break;
      
    case 0x20FF48B7: // 2
      break;
      
    case 0x20FFC837: // 3
      break;
      
    case 0x20FF28D7: // 4
      break;
      
    case 0x20FFA857: // 5
      break;
      
    case 0x20FF6897: // 6
      break;
    
    case 0x20FFE817: // 7
      break;
    
    case 0x20FF18E7: // 8
      break;
    
    case 0x20FF9867: // 9
      break;
    
    case 0x20FF08F7: // 0
      break;
    
    
    case 0x20FF7887: // redo
      break;
    
    case 0x20FF906F: // fav
      break;
    
    case 0x20FF58A7: // menu
      break;
    
    case 0x20FF38C7: // exit
      break;
    
    case 0x20FFD827: // epg
      break;
    
    case 0x20FFB847: // info
      break;
    
    
    case 0x20FF00FF: // up
      break;
    
    case 0x20FF807F: // down
      break;
    
    case 0x20FFC03F: // left
      break;
    
    case 0x20FF40BF: // right
      break;
    
    case 0x20FFF807: // -ok-
      break;
    
    // Servo Control
    case 0x20FFEA15: // V+
      Serial.println(". -> V+");
      if(pos >= 179){
        Serial.println(". -> V+: BROKEN"); Serial.println(pos);
        break;
      }
      else{
        pos += 1;
        moveServo(pos);
      }
      break;
    
    case 0x20FF1AE5: // V-
      Serial.println(". -> V-");
      if(pos <= 1){
        Serial.println(". -> V-: BROKEN"); Serial.println(pos);
        break;
      }
      else{
        pos -= 1;
        moveServo(pos);
      }
      break;
    
    case 0x20FFAA55: // P+
      Serial.println(". -> P+");
      if(pos >= 130){
        Serial.println(". -> P+: BROKEN"); Serial.println(pos);
        break;
      }
      else{
        pos+= 50;
        moveServo(pos);
      }
      break;
    
    case 0x20FF6A95: // P-
      Serial.println(". -> P-");
      if(pos <= 50){
        Serial.print(". -> P-: BROKEN"); Serial.println(pos);
        break;
      }
      else{
        pos -= 50;
        moveServo(pos);
      }
      break;
    
    case 0x20FF20DF: // tv/radio
      Serial.println(". -> tv/radio");
      if(pos >= 170){
        Serial.println(". -> tv/radio: BROKEN"); Serial.println(pos);
        break;
      }
      else{
        pos += 10;
        moveServo(pos);
      }
      break;
    
    case 0x20FF7A85: // sat
      Serial.println(". -> sat");
      if(pos <= 10){
        Serial.println(". -> sat: BROKEN"); Serial.println(pos);
        break;
      }
      else{
        pos -= 10;
        moveServo(pos);
      }
      break;
    
    
    case 0x20FFD02F: // red
      Serial.println(". -> red");
      moveServo();
      moveServo(180);
      moveServo();
      pos= 0;
      break;
    
    case 0x20FFB04F: // green
      break;
    
    case 0x20FF708F: // yellow
      break;
    
    case 0x20FFF00F: // blue
      break;
    
    
    case 0x20FFA05F: // b1
      //toggle(IsOn2, frev_relay, "b1");
      toggle(frev_relay, "b1");
      break;
    
    case 0x20FFE01F: // b2
      //toggle(IsOn3, left_relay, "b2");
      toggle(left_relay, "b2");
      break;
    
    case 0x20FFE21D: // b3
      //toggle(IsOn4, right_relay, "b3");
      toggle(right_relay, "b3");
      break;
    
    case 0x20FF609F: // b4
      break;
    
    case 0x20FFC23D: // b5
      break;
    
    case 0x20FF10EF: // b6
      break;
    
    case 0x20FF02FD: // b7
      break;
    
    case 0x20FF42BD: // b8
      break;
    
    case 0x20FF22DD: // b9
      break;
    
    
    case 0xFFFFFFFF: // null/repeat
      Serial.println("-> repeat/NULL");
      break;
    
    default:
      if(debug == true){
        Serial.print("error: unknown button: "); Serial.println(results.value, HEX);
      }
      break;
  }
  //delay(10);
}
