#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

  int v[10] = {2,4,6,8,10,1,3,5,7,9};
int i,x =0;
for(i=2; i<7; i++)
x = x + v[i];
printf("%d", x);




	return EXIT_SUCCESS;
}
