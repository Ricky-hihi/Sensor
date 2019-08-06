void setup() {

  Serial.begin(9600) ;                        // start serial connection
  pinMode(5, INPUT) ;                        // initialize digital pin5 as an input
  pinMode(7, INPUT_PULLUP) ;                 // initialize digital pin7 as an input pullup
  pinMode(LED_BUILTIN, OUTPUT) ;             // initialize digital pin LED_BUILTIN as an output.
  
}

byte j ;                                      // 感應到才計算
byte a[30] = {0} ;

void loop() {
 byte led = digitalRead(LED_BUILTIN) ;
 Serial.print("Lux: ") ;Serial.println(digitalRead(5)) ;  // print out pin5
 
  switch (digitalRead(7)){
    case HIGH :
    Serial.print("LED: "); Serial.println(led);
      for (byte i = 0 ; i<30 ; i++){
        a[i] =  digitalRead(5) ;
        j+=a[i] ;
        delay (100) ;
        Serial.print(a[i]) ; Serial.print("  j=") ; Serial.println(j) ;
        }      
        if (j>15){
          digitalWrite(LED_BUILTIN,HIGH) ;
          }else{
            digitalWrite(LED_BUILTIN,LOW) ;
            }
         j = 0 ;
        break ;
        
    case LOW :
    Serial.print("LED: "); Serial.println(led);
      for (byte i = 0 ; i<30 ; i++){
        a[i] =  digitalRead(5) ;
        delay (100) ;
        j+= a[i] ;
        Serial.print(a[i]) ; Serial.print("  j=") ; Serial.println(j) ;
        }
        if (j<15){
          digitalWrite(LED_BUILTIN,HIGH) ;
          }else{
            digitalWrite(LED_BUILTIN,LOW) ;
            }
         j = 0 ;
            break ;
        }
  }
