#define ADET 50 //hata dizisi için eleman sayısı
const int LDR=A5;
int degerler[ADET]; 
int ptr=0;

void setup() {
  pinMode(LDR , INPUT);
  for (int i=0;i<ADET;i++) {
    degerler[i]=0;
  }
  Serial.begin(9600);
  Serial.println(DiziOrtalama(degerler));
  
}

void loop() {
  
  int deger=analogRead(LDR);
  degerler[ptr]=deger;
  Serial.print(ptr);
  Serial.print("\t");
  Serial.print(degerler[ptr]);
  Serial.print("\t");
  Serial.println(DiziOrtalama(degerler));
  ptr++;
  if (ptr==ADET) ptr=0;  
  delay(100);  
  
}

long DiziOrtalama(int sayilar[]) {
  long toplam=0;
  for (int i=0;i<ADET; i++) {   
    toplam=toplam+sayilar[i];
  }
  return toplam/ADET;
}
