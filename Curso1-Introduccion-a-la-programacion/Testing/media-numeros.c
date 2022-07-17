#include <stdio.h>



int main(){
	printf("Bitte geben sie mehrere Nummern ein. 999 beendet die Eingabe.");
	
	float num=0;
	int counter=0;
	float eingabe;
	
	do{	
		scanf("%f", &eingabe);
		num += eingabe;
		counter++;
	}while(eingabe!=999);
	

	printf("Media es: %f",(num-999)/(float)(counter-1));

	return 0;
}
