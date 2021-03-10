bool Kontrol(char dizi1[4] , char dizi2[4]) {
  if (strncmp(dizi1,dizi2,4)==0){
    return true;
  }
  else {
    return false;
  }  
}
