#include <stdio.h>
#include <stdlib.h>
#include <string.h>







int main(){
  int tot,i,j;
  printf("Hello");
  int A[4][4]={{2,2,2,2},
      {2,2,2,2},
      {2,2,2,2},
      {2,2,2,2}
    };
    for(i=0;i<4;i++){
      for(j=0;j<4;j++){
        tot=tot+A[i][j];

      }
    }
    printf("%d", tot);

  return 0;
}
