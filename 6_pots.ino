const int potpin = 0;


void setup() {
  Serial.begin(9600);
  

}

void loop() {
 int sensorred = analogRead(potpin);
 int dispvalue = map(sensorred, 0, 1023, 0, 100);
 
 Serial.print("Pot is at ");
 Serial.print(dispvalue);
 Serial.print("% \n");
  delay(2000);
  
}
