#include <stdio.h>
#include <string.h>



int main(){
	
	char cad1[255] = "Desarollo";
	char cad2[255] = "Investigación";
	char cad3[255] = "Testing";
	

	strcat(cad1, cad2);
	printf("%s\n", cad1);   // Resultado: 'DesarolloInvestigación'


	size_t len;
	len = strlen(cad3);
	
	
	strncat(cad2, cad3, len);  // Hängt "len" zeichen an. Hier Wordlänge. 
	printf("%s\n", cad2);



	return 0;
}
