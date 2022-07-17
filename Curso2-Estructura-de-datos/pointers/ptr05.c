

#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int main(){

	char snombre[] = "Daniel What";
	char otro[] = "Robert";

	char *pnombre = snombre;   // ohne &, da es ja ein zeiger ist

	printf("%s\n", snombre);

	int i;
	for(i=0;i<6;i++){
		*(snombre + i) = otro[i];
	}

	printf("%s\n", snombre);


	return EXIT_SUCCESS;
}
