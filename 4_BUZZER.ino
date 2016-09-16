const int bz = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(bz, OUTPUT);
  
  digitalWrite(bz, LOW);
}

void loop() {
   put your main code here, to run repeatedly: 
 digitalWrite(bz, HIGH);
 delay(1000);
  digitalWrite(bz, LOW);
  delay(1000);
}
