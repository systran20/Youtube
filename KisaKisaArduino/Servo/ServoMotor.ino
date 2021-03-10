#include <Servo.h>    //servo kütüphanesi

Servo myservo;       //myservo adı değişken adı, istediğini yaz

void setup() {
  Serial.begin(9600);
  myservo.attach(9); //, servo motoru 9 nolu porta bağla (Serial.begin() gibi )   
}

void loop() {  
  Serial.println("0");  
  myservo.write(0);
  delay(3000);  

  Serial.println("90");
  myservo.write(90);
  delay(3000);

  Serial.println("180");
  myservo.write(180);
  delay(3000);
  
  
    
}
