#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void printArray(char array[], int len){
	printf("[ ");
	int j;
	for(j=0;j<len;j++){   //bucle for para pasar al standard output stream cada entrada del array
		printf("%c ", array[j]);
	}
	printf("]\n");
}



int main(){
  char cad[]="Michi";
  char tot[6]={'_','_','_','_','_','\0'};
  for(int i=0;i<5;i++){
      printf("%c",cad[i]);
      if((cad[i])=='i'){
        tot[i]=cad[i];
      }
  }

  printArray(tot, 5);


  return 0;
}
