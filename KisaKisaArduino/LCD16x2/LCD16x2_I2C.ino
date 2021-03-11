#include <LiquidCrystal_I2C.h>
#include <Wire.h>

//0x27 LCD ekranımızın I2C iletişimi için kullanılan adresi
//bu genelde bütün lcd ekranlarda aynıdır.

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {

  //initialize lcd screen
  lcd.init();
  // turn on the backlight
  lcd.backlight();
}
void loop() {
  //wait for a second
  delay(1000);
  // tell the screen to write on the top row
  lcd.setCursor(0, 0);
  // tell the screen to write “hello, from” on the top row
  lcd.print("Merhaba Dünya");
  // tell the screen to write on the bottom row
  lcd.setCursor(0, 1);
  // tell the screen to write “Arduino_uno_guy” on the bottom row
  // you can change whats in the quotes to be what you want it to be!
  lcd.print(millis()/1000);

}
