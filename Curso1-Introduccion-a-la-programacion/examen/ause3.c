#include <stdio.h>

int main(){
  printf("TEST");
  int datos[3]={2,4,5};
  int s=0;

  int k=0;
  int m=0;
  while(m<=2){
    while(k<3){
      s=s+datos[k];
    }
    m=m+1;
  }


  printf("S= %d\n",s);

  return 0;
}
