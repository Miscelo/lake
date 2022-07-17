


#include <stdio.h>


int main(){
	char strr[20];
	int i;
	for(i=0;i<18;i++){
		scanf("%[^\n]s", strr);
		printf("%s\n", strr);
		fpurge(stdin);
	}



	return 0;
}



