int latchPin = 5;
int clockPin = 6;
int dataPin = 4;
int leds = 0;
 
void setup() 
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
}
 
void loop() 
{
  leds = 0;
  registeraYaz();
  delay(25);
  for (int i = 0; i < 16; i++)
  {
    bitSet(leds, i);
    registeraYaz();
    delay(25);
  }
  for (int i = 16; i >= 0; i--)
{
    bitClear(leds, i);
    registeraYaz();
    delay(25);
  }
}
void registeraYaz()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, MSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}
