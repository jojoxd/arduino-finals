void loop(){
  if(irrecv.decode(&results)){
    translateIR();
    irrecv.resume();
  }
}
