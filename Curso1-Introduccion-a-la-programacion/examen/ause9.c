#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int mainMenu();



int main(){

  int mn;
  while(mn!=3){
    printf("Hello\n");
    printf("Eingabe: ");
    scanf("%d", &mn);
  }

  printf("FIN");
  return 0;
}



int mainMenu(){
  printf("Eingabe func: ");
  int a = 42;
  return a;
}
