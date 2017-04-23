#include <Servo.h>
int su=90;
int giu=120;
Servo servo1;

void setup() {
  servo1.attach(9);
  servo1.write(40);//tira su il pennino
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  delay(3000);//aspetta 3 secondi per inserire il telefono
  
  digitalWrite(13, LOW);
  servo1.write(giu);
  delay(200);
  servo1.write(su);
  delay(770);
}

void loop() {
  servo1.write(giu); //1
  delay(200);
  servo1.write(su);//0
  delay(600);
}
