// Calcula area de triángulo a partir de su base y altura

#include <stdio.h>


int main(){

  float base, altura, area;
  char sim;

  printf("Base y Altura: ");
  scanf("%f%c%f", &base, &sim, &altura);

  printf("Area: %f\n", base);
  printf("Simb: %c\n", sim);
  printf("Altu: %f\n", altura);


  area = (base*altura)/2;    // instruccion de asignacion simple
  printf("Area: %f", area);


  return 0;
}
