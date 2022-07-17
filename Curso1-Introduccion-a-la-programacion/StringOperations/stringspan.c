#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void){

  int num[] = { 5,8,6,42,3,4 };
  
  int pos;
  pos = strcspn(num, 42);

  printf("%d", pos);





  return 0;
}
