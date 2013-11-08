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
    
    case ox20FF18E7: // 8
      break;
    
    case 20FF9867: // 9
      break;
    
    case 20FF08F7: // 0
      break;
    
    
    case 20FF7887: // redo
      break;
    
    case 20FF906F: // fav
      break;
    
    case 20FF58A7: // menu
      break;
    
    case 20FF38C7: // exit
      break;
    
    case 20FFD827: // epg
      break;
    
    case 20FFB847: // info
      break;
    
    
    case 20FF00FF: // up
      break;
    
    case 20FF807F: // down
      break;
    
    case 20FFC03F: // left
      break;
    
    case 20FF40BF: // right
      break;
    
    case 20FFF807: // -ok-
      break;
    
    
    case 20FFEA15: // V+
      break;
    
    case 20FF1AE5: // V-
      break;
    
    case 20FFAA55: // P+
      break;
    
    case 20FF6A95: // P-
      break;
    
    case 20FF20DF: // tv/radio
      break;
    
    case 20FF7A85: // sat
      break;
    
    
    case 20FFD02F: // red
      break;
    
    case 20FFB04F: // green
      break;
    
    case 20FF708F: // yellow
      break;
    
    case 20FFF00F: // blue
      break;
    
    
    case 20FFA05F: // b1
      break;
    
    case 20FFE01F: // b2
      break;
    
    case 20FFE21D: // b3
      break;
    
    case 20FF609F: // b4
      break;
    
    case 20FFC23D: // b5
      break;
    
    case 20FF10EF: // b6
      break;
    
    case 20FF02FD: // b7
      break;
    
    case 20FF42BD: // b8
      break;
    
    case 20FF22DD: // b9
      break;
    
    
    case FFFFFFFF: // null/repeat
      break;
    
    default:
      Serial.println(results.value, HEX);
      break;
  }
  delay(20);
}
