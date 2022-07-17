#include <stdio.h>


int main(){

  float bruto, impuesto, neto;

  printf("Salario bruto: ");

  scanf("%f", &bruto);

  impuesto=0.14*bruto;
  neto = bruto - impuesto;
  printf("Impuestos: %.3f\n", impuesto );
  printf("Salario neto: %.2f\n", neto);


  int a = 4;
  printf("%.5d", a);

  return 0;
}
