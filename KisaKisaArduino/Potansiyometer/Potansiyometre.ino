//POTANSİYOMETRE KULLANIMI
//09.03.2021 Ömer ERMİŞ

int POT = A0;

void setup() {
  pinMode(POT , INPUT);
  Serial.begin(9600);
}

void loop() {
  int deger= analogRead(POT);
  Serial.println(deger);
  delay(100);
}
