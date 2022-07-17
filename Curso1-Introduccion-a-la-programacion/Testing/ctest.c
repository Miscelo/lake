#include <stdio.h>
#include <limits.h>
#include <string.h>


int main(){

  char cad[] = "Michael";
  printf("%s", cad);

  char a;
  a = getchar();
  printf("%c\n", a);


  int *val = 42;
  printf("%p", &val);
  int b = &val +1;
  printf("%d", b);

  return 0;
}
