#include <stdio.h>
#include <stdlib.h>
#include <string.h>







int main(){
  int matriz[4][4] = {
                      {2,2,2,2},
                      {2,2,2,2},
                      {2,2,2,2},
                      {2,2,2,2}
  };
  
  int tot,i,j;
  for(i=0;i<4;i++){
    for(j=0;j<=4;j++){
      tot=tot+matriz[i][j];
    }
  }

  printf("%d", tot);

  return 0;
}
