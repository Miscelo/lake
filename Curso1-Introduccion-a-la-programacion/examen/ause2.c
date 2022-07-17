#include <stdio.h>
#include <stdlib.h>
#include <string.h>







int main(){

  int v[10] = {2,4,6,8,10};
  int i=0;
  int x=0;
  while(i<=10){
    x=x+v[i];
    i=i+1;
  }

  printf("%d", x);

  return 0;
}
