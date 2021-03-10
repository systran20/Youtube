//PIR SENSÖR kullanımı
//02.03.2021 Ömer ERMİŞ
int Sensor=8;
int Led=13;
void setup() {      
  pinMode(Sensor , INPUT);
  pinMode(Led , OUTPUT);  
}
void loop() {
  int pir=digitalRead(Sensor);
  if (pir==HIGH) {
    digitalWrite(Led , HIGH);
  }
  else {
    digitalWrite(Led , LOW);
  }  
  delay(100);  
}
