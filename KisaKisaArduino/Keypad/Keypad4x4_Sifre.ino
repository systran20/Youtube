//KEYPAD Kütüphanesi Ekleme
//09.03.2021 Ömer ERMİŞ
#include <Keypad.h>

const byte satir = 4; 
const byte sutun = 4; 
char sifre[]="1903"; //şifre
char giris[]="xxxx";       //bastığım tuşları ssaklamak için
byte indis=0;                         //bastığım kaçıncı tuş? sırasını takip etmek için

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
    giris[indis]=tus;    
    Serial.print(indis);
    Serial.print('\t');
    Serial.println(giris);        
    if (indis==3) {
      //hafıazada 4 tane tuş var kontrol edilmesi gerekir.   
      //önce indis değişkenini 0 yap
      Serial.println(' ');
      Serial.println("4 karakter girildi, kontrol yapılacak");
      Serial.println(' ');
      indis=0;
      if (Kontrol(sifre , giris)) {
        //şifre doğru ise
        Serial.println("Şifre Doğru");
        Serial.println(' ');
      }
      else {
        //şifre yanlış ise girilen değerleri sıfırla
        Serial.println("Şifre YANLIŞ");        
        Serial.println(' ');
        
        giris[0]='x';
        giris[1]='x';
        giris[2]='x';
        giris[3]='x';
      }
    }
    else {    
      //değilse indis değerini bir sonraki değeri almak için arttır  
      indis++;
    }
  }  
}
