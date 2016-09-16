const int buttonl = 9;
const int ledr = 5;


int buttonstate = 0;
int i = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonl,INPUT);
  pinMode(ledr,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  buttonstate = digitalRead(buttonl);
  
  if(buttonstate == HIGH) {
    if (i == 0) {
      digitalWrite(ledr, HIGH);
      i=1;
    }
    
    else if (i == 1) {
      digitalWrite(ledr, LOW);
      i = 0;
    }
  }
  delay(100);
}
