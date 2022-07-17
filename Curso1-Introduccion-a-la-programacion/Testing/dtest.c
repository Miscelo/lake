#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){


  char frase[100];
  int n;
  printf("Eingabe: ");
  scanf("%[^\n]", frase);
  printf("\n");

  for(n=strlen(frase)-1; n>=0;n--){
    putchar(frase[n]);
  }



  system("pause");


  getchar();



  return 0;
}
