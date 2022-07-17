// Funktion berechnet das minimum von 2 Zahlenpaaren so oft ,
// wie man es über die Eingabe, for-schleife , bestätigt.
#include <stdio.h>

int menor(int a, int b);

int main(){
  int n;
  int val01;
  int val02;
  int min;
  printf("¿Cuantos pares de numeros quieres comparar? ");
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    printf("Introduzca el primer número: ");
    scanf("%d", &val01);
    printf("Introduzca el segundo número: ");
    scanf("%d", &val02);
    min = menor(val01,val02);
    printf("El mínimo es %d.\n\n", min);
  }
  printf("exit\n");
  return 0;
}


int menor(int a, int b){
  if (a<=b) return(a);
  else return(b);
}
