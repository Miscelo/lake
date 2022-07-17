#include <stdio.h>
#include <stdlib.h>


void stats(double *array, int len, double *mayor, double *menor, double *media){
	int i;
	double suma=0;
	*mayor=*array;
	*menor=*array;
	for(i=0;i<len;i++){
		if(*mayor<array[i]){
			*mayor=array[i];
		}
		if(*menor>array[i]){
			*menor=array[i];
		}
		suma+=array[i];
	}
	*media=suma/len;
}




int main(){

	double A[]={2.3, 1.1, 5.7, 9.1, 5.4};
	int len = sizeof(A)/sizeof(double);
	double max, min, media;

	stats(A,len, &max, &min, &media);
	
	printf("Mayor: %lf\nMenor: %lf\nMedia: %lf\n", max, min, media);

	return 0;
}
