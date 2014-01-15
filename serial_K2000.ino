/*
  Modified version of an Arduino example:  

  Reading a serial ASCII-encoded string.
  created 13 Apr 2012
  by Tom Igoe
 
 This example code is in the public domain.
 */

void setup() {
  setup_param_serial()
}

void loop() {
  ///////  ReadASCIIString ///////
  param_serial()
    
  ///////  Motor Control  ///////
  motor_control_refresh()
}

void setup_param_serial(){
  // initialize serial:
  Serial.begin(9600);
}

void param_serial(){
  // if there's any serial available, read it:
  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    int param_id = Serial.parseInt(); 
    // do it again:
    int param_value = Serial.parseInt(); 


    // look for the newline. That's the end of your
    // sentence:
    if (Serial.read() == '\n') {
      param_update(param_id, param_value)
    }
  }
}

void param_update(param_id, param_value){
// TODO:
}
void  motor_control_refresh(){
// TODO:
}
