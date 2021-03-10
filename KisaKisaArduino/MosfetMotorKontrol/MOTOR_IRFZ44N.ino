//IRFZ44N N KANAL MOSFET
//03.03.2021 Ömer ERMİŞ

#define MOTOR 3
#define bekle 2000

void setup() {
  pinMode(MOTOR , OUTPUT);  
}

void loop() {
  analogWrite(MOTOR , 0);
  delay(bekle*2);
    
  analogWrite(MOTOR , 50);
  delay(bekle);

  analogWrite(MOTOR , 100);
  delay(bekle);

  analogWrite(MOTOR , 150);
  delay(bekle);

  analogWrite(MOTOR , 200);
  delay(bekle);

  analogWrite(MOTOR , 255);
  delay(bekle);  
  
}
