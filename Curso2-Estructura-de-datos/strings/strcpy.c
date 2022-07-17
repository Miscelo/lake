#include <stdio.h>
#include <string.h>



int main(){


	char cad1[4] = "aaaa";
	char cad2[5] = "bb";


	strcpy(cad1,cad2);

	printf("%s\n", cad1);
	printf("%s\n", cad2);



	int len;
	len = strlen(cad1);
	printf("Len= %d\n", len);




	return 0;
}
