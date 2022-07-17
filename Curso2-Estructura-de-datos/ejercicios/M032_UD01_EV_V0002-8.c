//stcopy ersatz
#include <stdio.h>


void strcpy(char *arr1, char *arr2);

int main(){
	char Array1[]="Michael";
	char Array2[]="Ana";
	strcpy(Array1,Array2);
	printf("%s\n", Array1);

	return 0;
}



void strcpy(char *arr1, char *arr2){
	int counter=0;
	int i;
	for(i=0;*(arr1+i)!='\0';i++){
		*(arr1+i)=*(arr2+i);
		counter+=1;
	}


}
