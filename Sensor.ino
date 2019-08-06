void setup() {
  Serial.begin(9600);                                                        // start serial connection
  pinMode(5, INPUT);                                                      // initialize digital pin5 as an input
  pinMode(LED_BUILTIN, OUTPUT);                              // initialize digital pin LED_BUILTIN as an output.
}

// the loop function runs over and over again forever
void loop() {
  int lux = digitalRead(5);                                                              // move pin5 into lux
  Serial.print("Lux: "); Serial.println(lux);                                   // print out lux
  if( lux == HIGH ) { 
    digitalWrite( LED_BUILTIN, HIGH ); }        //  if lux=1 , LED on
  else if( lux == LOW ) {
    digitalWrite( LED_BUILTIN, LOW ); }   // if lux=0 , LED off
  delay(1000);                                                                            // wait for a second
}
