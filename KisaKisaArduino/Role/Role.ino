#define RolePort 13
void setup() {
  //rölenin bağlı olduğu pini çıkış olarak sisteme tanıt
  pinMode(RolePort , OUTPUT);  
}

void loop() {
  //rölenin bağlı olduğu pine 5v ver/AÇ
  digitalWrite(RolePort , HIGH);

  //3000 milisaniye=3sn bekle
  delay(3000);

  //rölenin bağlı olduğu pine 0v ver/KAPAT
  digitalWrite(RolePort , LOW);

  //3000 milisaniye=3sn bekle
  delay(3000);
  
}
