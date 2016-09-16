const int ledred = 5;
const int ledgreen = 6;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(ledred, OUTPUT);
  pinMode(ledgreen, OUTPUT);
  
  digitalWrite(ledred, LOW);
  digitalWrite(ledgreen, LOW);
  

}

void loop() {
  // put your main code here, to run repeatedly: 
 digitalWrite(ledgreen, HIGH);
  digitalWrite(ledred, LOW);
  delay(2000);
 digitalWrite(ledgreen, LOW);
  digitalWrite(ledred, HIGH);
  delay(2000);
}
