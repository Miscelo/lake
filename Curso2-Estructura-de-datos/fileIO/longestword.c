#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void printArray(char *arr);


int main(){
 	clock_t begin = clock();
	char file[] = "ctext.txt";
	char *word;
	size_t n=100;
	word = (char *)malloc(sizeof(int) * n);

	FILE *f;
	f = fopen(file, "r");
	if(f==NULL){
		printf("ERROR, without data\n");
		return EXIT_FAILURE;
	}
	char c;
	int counter=0;
	int max=0;
	while((c=fgetc(f))!=EOF){
		//printf("%c", c);
		if(c!=32){
			counter++;
			*word = counter;
			*(word+counter)=c;
		}
		else{
			if(counter>max){
				max=counter;
				printArray(word);

			}
			counter=0;
		}
	}
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("%f", time_spent);

	return EXIT_SUCCESS;
}


void printArray(char *arr){
	printf("Längstes Wort:= ");
	int leng = (int)*arr;
	int i;
	for(i=1;i<leng+1;i++){
		printf("%c", *(arr+i));
	}
	printf("\n");
	printf("Zeichen: %d\n", leng);
}
