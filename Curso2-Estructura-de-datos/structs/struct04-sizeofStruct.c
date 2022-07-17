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

  int len = sizeof(cliente1.dni)/sizeof(char);
  printf("Longitud de cliente.dni: %d\n", len);
  for(int i=0;i<len;i++){
    printf("%c", cliente1.dni[i]);
  }
  printf("\n");

  /* Esta operación es muy usada cuando tenemos que trabajar dinámicamente con
   * la memoria, ya que debemos solicitarle al sistema cuanta memoria
   * (cuantos bytes queremos reservar).*/
  int structsize;
  structsize = sizeof(cliente1);
  printf("Size: %d\n", structsize);

  struct Cliente cliente2;
  strcpy(cliente2.dni, "12345678L");
  strcpy(cliente2.nombre, "Ana");
  strcpy(cliente2.origen, "Conil");
  printf("%s\n", cliente2.dni);
  printf("%s\n", cliente2.nombre);
  printf("%s\n", cliente2.origen);


  return 0;
}
