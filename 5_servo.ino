// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 

 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
} 
 
 
void loop() 
{ 
                                 // in steps of 1 degree 
    myservo.write(0);              // tell servo to go to position in variable 'pos' 
    delay(1000);                       // waits 15ms for the servo to reach the position 

                               
    myservo.write(180);              // tell servo to go to position in variable 'pos' 
    delay(1000);                       // waits 15ms for the servo to reach the position 
  
} 
