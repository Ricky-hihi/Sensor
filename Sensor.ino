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
    digitalWrite( LED_BUILTIN, LOW );void setup() {
  Serial.begin(9600);                                                        // start serial connection
  pinMode(5, INPUT);                                                      // initialize digital pin5 as an input
  pinMode(LED_BUILTIN, OUTPUT);                              // initialize digital pin LED_BUILTIN as an output.
  
}

int i=0 ;
int j=0 ;

// the loop function runs over and over again forever
void loop() {
  
  int lux = digitalRead(5);                                                              // move pin5 into lux
  Serial.print("Lux: "); Serial.println(lux);                                              // print out lux
  Serial.print("i="); Serial.println(i);

   if (lux == HIGH && i<50){
    i++;
    j++;
   }else{
     i = 0;
     j = 0;
     Serial.println(j);
   }
  Serial.print("j ="); Serial.println(j); 
  if (j==50){
    digitalWrite(LED_BUILTIN,HIGH) ;
    delay (5000) ;
    i = 0;
    j = 0;
    }else{
      digitalWrite(LED_BUILTIN,LOW) ;
      delay(500);
      }
} }   // if lux=0 , LED off
  delay(1000);                                                                            // wait for a second
}
