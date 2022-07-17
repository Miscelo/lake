#include <stdio.h>
#include <string.h>



union Value{
  int a;
  int b;
}value;

int main(){

  union Value val1;
  val1.a = 5;

  val1.b = 9;

  printf("%d\n", val1.a);  // imprime 9. siempre sobreescribe, solo guarda uno

  return 0;
}
