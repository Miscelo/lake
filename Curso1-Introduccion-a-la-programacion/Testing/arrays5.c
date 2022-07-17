#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(){

	//Strcpy()
	char str[20];
	
	int i;
	printf("Eingabe: ");
	gets(str);
	printf(str);
	getchar();

	char bail[5];
	strcpy(bail, "superlangeTESTeingabe");
	printf(bail);
	

	//Strlen() printf("\n************************************************\n");
	char frase[100];
	int n;
	printf("\nEingabe2: ");
	scanf("%[^\n]", frase);
	
	printf("%ld",strlen(frase));


	printf("\n");
	for(n=strlen(frase)-1;n>=0; n--){
		putchar(frase[n]);
	}



	//unsigned strlen(const char *s);



	return 0;
}
