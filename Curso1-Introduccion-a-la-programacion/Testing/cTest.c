#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>



int main(){


	char letter = 'A';

	((int)letter >= 97 && (int)letter <=108) ?
	printf("Is letter\n") : printf("Is not a lower letter\n");


	char word[30];
	printf("Eingabe des wortes: ");
	scanf("%s", &word);
	printf("%s\n", word);



	char w[] = "Kafka";
	int i;

	for(i=0; w[i]!='\0', i++){
		printf("%c", w[i]);
	}

	getchar();


	return 0;
}
