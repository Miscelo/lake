/* printed zu file 20 zufällige Matheaufgaben.
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(){
	srand(clock());

	FILE *ergfi;  //ergebnisfile
	FILE *fi;     // aufgabenfile
	fi = fopen("math.txt", "w+");
	ergfi = fopen("erg.txt", "w+");
	if(fi==NULL || ergfi==NULL){
		printf("ERROR: Keine DATEI konnte angelegt werden!\n");
	} else{	
		int randnum1, randnum2, erg;
		char zahl1[14], zahl2[4], ergzahl[4];
		char plus[] = " + ";
		char gleich[] = " =\n";
		char next[] = "\n";
		int i;
		for(i=0;i<20;i++){
			randnum1 = rand()%1000+1;
			randnum2 = rand()%1000+1;
			erg = randnum1 + randnum2;  // berechnet ergebnis von zufallszahlen
			sprintf(ergzahl, "%d", erg);  //create char from int
			strcat(ergzahl, next);  //fügt zeilenumbruch hinter zahl
			fprintf(ergfi, ergzahl);  // print to file
			sprintf(zahl1, "%d", randnum1); // zufallszahl zu char
			sprintf(zahl2, "%d", randnum2); // zufallzahl int zu char
			strcat(zahl1, plus);   // char "+ " zu zufallszahl
			strcat(zahl1, zahl2);  
			strcat(zahl1, gleich);
			fprintf(fi, zahl1);
		}
	}
	fclose(fi);	

	return 0;
}
