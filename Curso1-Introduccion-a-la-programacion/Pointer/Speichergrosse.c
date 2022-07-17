#include <stdio.h>
#include <stdlib.h>

/*Speicher grösse unabhängig bei Zeigern, egal welcher Datentyp. Die Speicheradresse
 * hat immer die gleiche länge als hex.
 */


int main(){

	char *v;
	int *w;
	float *x;
	double *y;
	void *z;

	printf("%d\t %d\t %d\t %d\t %d\t \n", sizeof(v), sizeof(w), sizeof(x), sizeof(y), sizeof(z));
	// ergebnis:   8	8	8	8	8	
	// 64 bit umfasst 8byte (Datentyp long)



	return 0;
}
