#include <stdio.h>
#include <string.h>


//Die Adressen von STruct im RAM liegen hintereinander wie im Array

struct NUMBERS {
  int a;
  int b;
  int c;
} numbers;


void printEmpleado(struct Empleado *Emp);


int main(){

  struct NUMBERS Num1;
  Num1.a = 42;
  Num1.b = 1337;
  Num1.c = 13;

  printf("%p\n", &Num1.a);
  printf("%p\n", &Num1.b);
  printf("%p\n", &Num1.c);

  printN(&Num1);


  return 0;
}


void printN(struct NUMBERS *Num){
  printf("%d,%d,%d\n", Num->a, Num->b, Num->c);
  printf("%p\n", &Num->a);
  printf("%p\n", &Num->b);
  printf("%p\n", &Num->c);

}
