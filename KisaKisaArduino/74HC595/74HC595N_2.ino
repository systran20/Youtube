int latchPin = 5;
int clockPin = 6;
int dataPin = 4;

void setup() {
  //set pins to output so you can control the shift register
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  for (int i=0 ; i<255; i++) {
    Yaz(i , i);
    delay(10);
  }    
}

void Yaz(int deger1 , int deger2) {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, deger2); //2nd 74595
  shiftOut(dataPin, clockPin, MSBFIRST, deger1); //1st 74595
  digitalWrite(latchPin, HIGH);
}
