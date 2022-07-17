#include <stdio.h>

extern int a = 1;


int main(){
	String mmm = "word";
  int ergebnis = addFunc(4,5);
  printf("%d\n", ergebnis);
  for (size_t i = 0; i < ergebnis; i++) {

     printf("%d,",i);
  }
  int multer = Multiplicar(2,3);
  printf("\n\n%d", multer);

  printf("\n%d",a);
  return 0;
}



int addFunc(int a, int b){
  int c = a + b;
  return c;
}


int Multiplicar(int var, int var2){
  int er = var * var2;
  return er;
}

void printGlobal(int a){
  printf("%d",a);
}
