//Delay neden Kötü
//02.03.2021 Ömer ERMİŞ

const int led1=13;  //13 nolu porta bağlı led
const int led2=12;  //12 nolu porta bağlı led
void setup() {  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(13 , LOW);
  delay(500);
  digitalWrite(13 , HIGH);
  delay(500);
  digitalWrite(12 , LOW);
  delay(250);
  digitalWrite(12 , HIGH);
  delay(250); 
}
