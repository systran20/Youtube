#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcdModul(0x27, 16, 2); // I2C LCD DISPLAY ADRESI 0x27

#include <ThreeWire.h>
#include <RtcDS1302.h>
ThreeWire rtcModul(4, 5, 2); // RTC 1302 Modül DAT, SCLK, RESET
RtcDS1302<ThreeWire> Rtc(rtcModul);

void setup() {  
  rtcModul.begin();
  
  lcdModul.init();
  lcdModul.backlight();
  lcdModul.setCursor(0,0);
  lcdModul.print("RTC Modul ");  
  delay(2000);
  lcdModul.clear();
}

void loop() {
  char tarih[16];  
  char saat[16];
  RtcDateTime zaman = Rtc.GetDateTime();  
  sprintf(tarih, "TARIH %02u/%02u/%04u", zaman.Day(), zaman.Month(), zaman.Year());
  if ((zaman.Second()%2)==0) {
    sprintf(saat, "SAAT  %02u:%02u:%02u", zaman.Hour(), zaman.Minute(), zaman.Second());
  }
  else {
    sprintf(saat, "SAAT  %02u %02u %02u", zaman.Hour(), zaman.Minute(), zaman.Second());
  }
  
  lcdModul.setCursor(0,0);
  lcdModul.print(tarih);
  lcdModul.setCursor(0,1);
  lcdModul.print(saat);
  delay(1000); // ten seconds
}
