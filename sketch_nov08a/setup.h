void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(13, OUTPUT);
  Serial.println("setup complete (project: sketch_nov08a):");
  Serial.print(" - running using header version: "); Serial.println(version_header);
  Serial.print(" - running using loop version:   "); Serial.println(version_loop);
  Serial.print(" - running using setup version:  "); Serial.println(version_setup);
  Serial.print(" - running using setup version:  "); Serial.println(version_translate_IR);
  Serial.println(" - licensed with lgpl - Joey Vos(November '13)");
}
