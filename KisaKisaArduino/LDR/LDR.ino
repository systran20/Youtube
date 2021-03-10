const int LDR=A5;

void setup() {
  pinMode(LDR , INPUT);
  Serial.begin(9600);
}

void loop() {
  int deger=analogRead(LDR);
  Serial.println(deger);
  delay(100);

}
