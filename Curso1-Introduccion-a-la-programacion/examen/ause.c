#include <stdio.h>
#include <stdlib.h>
#include <string.h>







int main(){
  int v[3]={2,4,5};
  int k=0;
  int s=0;
  int m=0;
  while(m<=2){
    while(k<3){
      s=s+v[k];
    }
    m=m+1;

  }


  printf("%d",s);


  return 0;
}
