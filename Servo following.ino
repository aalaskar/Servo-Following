#include <Servo.h>

Servo reference;  
Servo follow;


int pos_r = 0;    // variable to store the servo position
int pos_f=0;

void setup() {
  reference.attach(5); 
  follow.attach(3);
  pinMode(A5,INPUT);
  pinMode(A4,INPUT);
}

void loop() {

  
  pos_r=analogRead(A5); //reference position
  pos_r=map(pos_r,0,1023,0,180);
           
    delay(500);                      
     
    pos_f=analogRead(A4); // Follower Position
    pos_f=map(pos_f,0,1023,0,180);
    follow.write(pos_f);
     

}
