#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(){
	char ins[30]= " ";

	FILE *f;
	f=fopen("test.txt", "a+");
	if(f==NULL){
		printf("ERROR\n");
		return EXIT_FAILURE;
	}else{
			do{
				fgets(ins,30,stdin);   // fputc  para solo un caracter
				if((strcmp(ins,"exit\n"))==0){
					break;
				}
				fprintf(f, ins);
			}while((strcmp(ins,"exit\n"))!=0);
	}

	fclose(f);




	return EXIT_SUCCESS;
}
