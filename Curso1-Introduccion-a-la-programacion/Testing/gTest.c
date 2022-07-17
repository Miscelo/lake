#include <stdio.h>
#include <curses.h>

void main(){

	int prim,seg,resul;
	char oper;
	clrscr(); /*borra pantalla limpia
	printf("\nPrimer numero: ");
	scanf("%d",&prim);
	printf("\nOperacion a realizar (+,-,*,/): ");
	oper=getche();
	printf("\nSegundo numero: ");
	scanf("%d",&seg);
	if(oper=='+') resul=prim+seg;
	if(oper=='-') resul=prim -seg;
	if(oper=='*') resul=prim*seg;
	if(oper=='/') resul=prim/seg;
	printf("\nEl resultado de la operacion %d %c %d es %d",prim,oper,seg,resul);
	getch(); /* espera a que introdir un carácter y termina programa
}
