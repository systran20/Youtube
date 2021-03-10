//PWM LED örneği
//05.03.2021 Ömer ERMİŞ

void setup() {
  pinMode(12 , OUTPUT);
  pinMode(3 , OUTPUT);
}

void loop() {  
  for (int i=0; i<255;i++) {
    analogWrite(3 , i);    
    delay(5);    
  }
  for (int i=255; i>=0;i--) {
    analogWrite(3 , i);    
    delay(5);    
  }
}
