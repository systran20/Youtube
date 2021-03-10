//RGB Led ortak KATOT (GND) kullanılmıştır.
//13 Red
//12 Green
//11 Blue

const int R=13;
const int G=12;
const int B=11;
const int bekle=3000;
void setup() {
  pinMode(R , OUTPUT);
  pinMode(G , OUTPUT);
  pinMode(B , OUTPUT);

}

void loop() {
  //sadece kırmızı
  digitalWrite(R , HIGH);
  digitalWrite(G , LOW);
  digitalWrite(B , LOW);
  delay(bekle);
  
  //sadece yeşil
  digitalWrite(R , LOW);
  digitalWrite(G , HIGH);
  digitalWrite(B , LOW);
  delay(bekle);

  //sadece MAVİ
  digitalWrite(R , LOW);
  digitalWrite(G , LOW);
  digitalWrite(B , HIGH);
  delay(bekle);

  //sadece KIRMIZI+YEŞİL
  digitalWrite(R , HIGH);
  digitalWrite(G , HIGH);
  digitalWrite(B , LOW);
  delay(bekle);

  //sadece KIRMIZI+MAVİ
  digitalWrite(R , HIGH);
  digitalWrite(G , LOW);
  digitalWrite(B , HIGH);
  delay(bekle);

  //sadece MAVİ+YEŞİL
  digitalWrite(R , LOW);
  digitalWrite(G , HIGH);
  digitalWrite(B , HIGH);
  delay(bekle);

  //sadece KIRMIZI+YEŞİL+MAVİ
  digitalWrite(R , HIGH);
  digitalWrite(G , HIGH);
  digitalWrite(B , HIGH);
  delay(bekle);  
}
