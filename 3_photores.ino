
const int photoresistor = A0;
const int ledr = 5;

int value;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledr, OUTPUT);
  Serial.begin(9600);//print values
}

void loop() {
  // put your main code here, to run repeatedly: 
  value = analogRead(photoresistor);
  if(value > 200){
    digitalWrite(ledr,LOW);
  }
  else{
    digitalWrite(ledr,HIGH);
  }
  Serial.print("Value: ");
  Serial.println(value);
  delay(1000);
}
