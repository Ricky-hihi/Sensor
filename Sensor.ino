void setup() {
  Serial.begin(9600);                        // start serial connection
  pinMode(5, INPUT);                        // initialize digital pin5 as an input
  pinMode(7, INPUT);                        // initialize digital pin7 as an input
  pinMode(LED_BUILTIN, OUTPUT);             // initialize digital pin LED_BUILTIN as an output.
  
}

int i=0  ;                                  // the number of times starts from 0
int j=30 ;                                  // number of detections

void loop() {
 
 int lux = digitalRead(5);
 int Switch = digitalRead(7);
 int led= digitalRead(LED_BUILTIN);
 Serial.print("Lux: "); Serial.println(lux);  // print out lux
 
  if (Switch==HIGH){
     if (lux==HIGH){
        i++ ;
        delay (100);
       }else{
         i=0 ;
         }
      Serial.print("i: "); Serial.print(i);
      
      if (i>=j){
       digitalWrite(LED_BUILTIN,HIGH) ;
        }else{
          digitalWrite(LED_BUILTIN,LOW) ;
          }
          Serial.print("  LED: "); Serial.println(led);
          
    }else{
      if (lux == LOW){
           i++ ;
           delay (100);
        }else{
           i=0 ;
      }
      
      Serial.print("i: "); Serial.print(i);
      if (i>j){
          digitalWrite(LED_BUILTIN,HIGH) ;
        }else{
          digitalWrite(LED_BUILTIN,LOW) ;
        }
      Serial.print("  LED: "); Serial.println(led);
      }
}
