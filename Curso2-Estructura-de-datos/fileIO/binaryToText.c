#include <stdin.h>
#include <stdlib.h>



int main(){
	char *binaryfile = "datosin";
	char *textfile = "datosout";
	FILE *binf = fopen(datosin, "rb");
	FILE *ftxt = fopen(datosout, "w");
	char sense[20];
	if(binf==NULL){
		printf(sterr, "ERROR: Can not open datosin.\n");
		fflush(stderr);
		return EXIT_FAILURE;
	}else{
		fread(&sense, sizeof(sense), 20, binf);






