#include <stdio.h>
#include <string.h>

/*Structur , ist wie Definition einer Klasse */
struct Books {
	/*Eigenschaften*/
	char title[99];
	int pages;
	char autor[50];
	double price;
} book; //Name für die Struktur, z.b. für Funktionen als Rückgabewert


void printBook(struct Books *Book);


int main(){
	struct Books Book1;
	strcpy(Book1.title,"LPIC-1 Sicher zur erfolgreichen Linux-Zertifizierung");
	Book1.pages = 548;
	strcpy(Book1.autor, "Harald Maaßen");
	Book1.price = 34.90;

	struct Books Book2;
	strcpy(Book2.title,"C von A-Z");
	Book2.pages = 1227;
	strcpy(Book2.autor, "Jürgen Wolf & René Krooß");
	Book2.price = 48.90;

	printf("******************************************************\n");
	printBook(&Book1);
	printBook(&Book2);


	return 0;
}

/* Funktion printed structur , der wird als Pointer übergeben*/
void printBook(struct Books *Book){
	printf(" %s\n", Book->title);   //Bei Pointer ist '->' notwendig, nihct '.'.
	printf(" * Autor: %s\n", Book->autor);
       	printf(" * Pages: %d\n", Book->pages);
	printf(" * Price: %.2lf\n", Book->price);
	printf("******************************************************\n");
}
