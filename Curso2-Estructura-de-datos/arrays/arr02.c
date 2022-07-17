#include <stdio.h>
#include <string.h>
#include <stdlib.h>






int main(){
	

	char  dado[8]={1,2,3,4,'\0',6,7};

	int i;
	for(i=0;dado[i]!='\0';i++){
		printf("%d\n", dado[i]);
	}
	
	int l;
	l = sizeof(dado)/sizeof(char);
	printf("sizeof l=%d\n", l);
	int len;
	len = strlen(dado);
	
	printf("len = %d\n", len);

	int j;
	for(j=0;j<=7;j++){
		printf("%d\n", dado[j]);
	}

	printf("\n-\n");

	int k;
	for(k=0;k<=7;k++){
		printf("%d\n", *(dado+k));
	}




	return 0;
}
