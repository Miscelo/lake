


#include <stdio.h>



#define MOD %
#define EQ ==

void teilbar(int);
int eingabe();

int main(){
  int num = 1;
  while(num != 0){
    num = eingabe();
    teilbar(num);
  }
  printf("\n *** ENDE***");



  return 0;
}

int eingabe(){
  int num;
  printf("Gib eine Zahl ein: ");
  scanf("%d", &num);
  return num;
}


void teilbar(int num){
  if(num MOD 2 EQ 0)
    printf("%d ist eine gerade Zahl!\n", num);
  else
    printf("%d ist eine ungerade Zahl!\n", num);

}
