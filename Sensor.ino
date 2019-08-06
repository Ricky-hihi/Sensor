byte i ;                                      // 直接計算
byte j ;                                      // 感應到才計算
byte led= digitalRead(LED_BUILTIN) ;

void setup() {

  Serial.begin(9600) ;                        // start serial connection
  pinMode(5, INPUT) ;                        // initialize digital pin5 as an input
  pinMode(7, INPUT_PULLUP) ;                 // initialize digital pin7 as an input pullup
  pinMode(LED_BUILTIN, OUTPUT) ;             // initialize digital pin LED_BUILTIN as an output.
  
}

void loop() {

 Serial.print("Lux: ") ;Serial.println(digitalRead(5)) ;  // print out lux
 
  switch (digitalRead(7)){
    case HIGH :
    Serial.print("LED: "); Serial.println(led);
      if  (i<30) {
        i++ ;           
        Serial.print("i: ") ;Serial.println(i) ;       
        if (digitalRead(5) == HIGH) {
          j++ ;  
          Serial.print("j: ") ;Serial.println(j) ; 
          }
          delay (200) ;
        }else{
          if (j>15) {
            digitalWrite(LED_BUILTIN,HIGH) ;      
            }else{
              digitalWrite(LED_BUILTIN,LOW) ;
              }  
          i=0 ; j=0 ;
          }
        break ;
        
    case LOW :
    Serial.print("LED: "); Serial.println(led);
      if  (i<30) {
        i++ ;            
        Serial.print("i: ") ;Serial.println(i) ;        
        if (digitalRead(5) ==LOW ) {
          j++ ; 
          Serial.print("j: ") ;Serial.println(j) ;  
          }
          delay (200) ;
        }else{
          if (j>15) {
            digitalWrite(LED_BUILTIN,HIGH) ;      
            }else{
              digitalWrite(LED_BUILTIN,LOW) ;
              }  
          i=0 ; j=0 ;
          }
            break ;
        }
  }
