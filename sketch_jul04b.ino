void setup() {
 Serial.begin(9600);
 pinMode(LED_BUILTIN, OUTPUT);
 pinMode(4, INPUT);
}
int i=0 ;
void loop() {
  
  int lux = digitalRead(4);
  Serial.print("Lux: "); Serial.println(lux);
  if (lux==HIGH){
  i++ ;
  Serial.println(i);
  }
}
