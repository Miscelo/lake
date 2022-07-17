#include <stdio.h>
#include <stdlib.h>



void stat(double *array, int len, double *max, double *min, double *media){
	int i;
	double counter;
	*max=*array;
	*min=*array;
	counter=0;
	for(i=0;i<len;i++){
		if(*(array+i)<*min) *min=*(array+i);
		if(*(array+i)>*max) *max=*(array+i);
		counter=counter+*(array+i);
	}
	*media=counter/len;
}


int main(){
	
	double A[] = {1.1, 2.2, 4.1, 5.2, 2.1, 3.2, 0.4};
	int len = sizeof(A)/sizeof(double);
	double max, min, media;
	stat(A,len, &max, &min, &media);
	printf("Maximim: %lf\n", max);
	printf("Minimum: %lf\n", min);
	printf("Media: %lf\n", media);
	return 0;
}
