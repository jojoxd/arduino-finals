void translateIR(){
  switch(results.value){
    case 0x20FF50AF: // on/off
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
    
    
    case 0x20FFEA15: // V+
      break;
    
    case 0x20FF1AE5: // V-
      break;
    
    case 0x20FFAA55: // P+
      break;
    
    case 0x20FF6A95: // P-
      break;
    
    case 0x20FF20DF: // tv/radio
      break;
    
    case 0x20FF7A85: // sat
      break;
    
    
    case 0x20FFD02F: // red
      break;
    
    case 0x20FFB04F: // green
      break;
    
    case 0x20FF708F: // yellow
      break;
    
    case 0x20FFF00F: // blue
      break;
    
    
    case 0x20FFA05F: // b1
      break;
    
    case 0x20FFE01F: // b2
      break;
    
    case 0x20FFE21D: // b3
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
      break;
    
    default:
      if(debug == true){
        Serial.println(results.value, HEX);
      }
      break;
  }
  delay(20);
}
