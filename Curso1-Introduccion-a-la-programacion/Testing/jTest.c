#include <stdio.h>



int main(){
	
	int abfrage;
	int Kapitel1 = 5;
	int Kapitel2 = 40;
	int Kapitel3 = 66;
	int Nachtrag = 211;
	int *Verzeichnis;      /* Zeiger */

	do {
		printf("\tBuch-Index Register\n");
		printf("\t -1- KApitel 1\n");
		printf("\t -2- KApitel 2\n");
		printf("\t -3- KApitel 3\n");
		printf("\t -4- Nachtrag\n");
		printf("\n\tAuswahl : ");
		scanf("%d",&abfrage);
		printf("\tDas Kapitel %d finden sie auf ", abfrage);
		
		switch(abfrage){
			case 1 : Verzeichnit = & Kapitel1;
					 printf("Seite %d\n", * Verzeichnis);
					 break;
		
	
	}while(abfrage<5);
	return 0;




	return 0;

}
