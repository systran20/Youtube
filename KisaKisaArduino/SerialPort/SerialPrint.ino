//seri port kullanımı
//02.03.2021 Ömer ERMİŞ

int sayac=0;

void setup() {    
  //seri haberleşmeyi 9600 baud rate hızında başlat
  //karşı tarafında bu hızda dinlemesi gerekir.
  Serial.begin(9600);
}


void loop() {   
  Serial.println(sayac);
  Serial.println("Merhaba Dunya");
  sayac++;  //sayaç değerini 1 arttır
  delay(2000);
}
