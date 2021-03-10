//KEYPAD Kütüphanesi Ekleme
//09.03.2021 Ömer ERMİŞ
#include <Keypad.h>

const byte satir = 4; 
const byte sutun = 4; 

char tuslar[satir][sutun] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte satirPin[satir] = {12, 11, 10, 9}; 
byte sutunPin[sutun] = {5, 4, 3, 2}; 

Keypad tusTakimi = Keypad(makeKeymap(tuslar), satirPin, sutunPin, satir, sutun); 

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char tus = tusTakimi.getKey();
  
  if (tus){
    Serial.println(tus);
  }  
}
