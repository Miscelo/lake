#include <stdio.h>
#include <string.h>

struct Cliente{
  char dni[9];
  char nombre[20];
  char origen[25];
} cliente, cliente1 = {"Y1234567W", "Pedro", "Valencia"};


int main(){
  printf("%s\n", cliente1.dni);  //Imprime con error, no termina en9
  printf("%s\n", cliente1.nombre);
  printf("%s\n", cliente1.origen);

  struct Cliente cliente2;
  strcpy(cliente2.dni, "12345678L");
  strcpy(cliente2.nombre, "Ana");
  strcpy(cliente2.origen, "Conil");
  printf("%s\n", cliente2.dni);
  printf("%s\n", cliente2.nombre);
  printf("%s\n", cliente2.origen);

  return 0;
}
