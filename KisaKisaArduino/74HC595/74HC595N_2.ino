int latchPin = 5;
int clockPin = 6;
int dataPin = 4;

void setup() {
  //set pins to output so you can control the shift register
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  Serial.begin(9600);
  Yaz(0x0000);
  delay(100);

}

void loop() {
  uint32_t i = 1;
  while (i <= 32768) {
    Yaz(i);
    delay(250);
    i = i << 1;
    Serial.println(i);
  }
}

void Yaz(uint16_t deger) {
  uint8_t cip1 = deger & 0x00FF;
  uint8_t cip2 = (deger >> 8) & 0x00FF;

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, cip2); //1st 74595
  shiftOut(dataPin, clockPin, MSBFIRST, cip1); //2nd 74595
  digitalWrite(latchPin, HIGH);
}
