#include <stdio.h>
#include <stdlib.h>


int main(){
	char nb_fichero[10]="info.dat";
   	FILE* fichero;
      	int i;

        fichero = fopen( nb_fichero, "r" );
	  
	for( i=1; i<=10; i++)   printf( "%s", fgetc(fichero) );
	      






	return 0;
}
