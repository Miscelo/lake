#include <stdio.h>



int main(){

	char word[20];
	fgets(word, 20, stdin);

	int i = 0;
	while(word[i]!='\0'){
		i++;
	}


	printf("Der String ist %d Zeichen lang.", i-1);

	return 0;

}
