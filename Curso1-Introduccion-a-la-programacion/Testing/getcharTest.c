#include <stdio.h>



int main(){
  char a,b;
  a = getchar();
  b = getchar();

  printf("\nDAs ist: %c%c\n",a,b);
  printf("\n********\n");
  putchar(a);
  putchar(b);

  return 0;
}
