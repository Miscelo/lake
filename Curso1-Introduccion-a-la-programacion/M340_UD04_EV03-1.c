/* Simula la memoria de una calculadora. El programa tendra que memorizar un
 * numero (al principio inicializar a 0) y después el usuario podra elegir todas las
 * veces que quiera y en el orden que quiera las siguientes opciones:
 *  - Ver el valor actual de la memoria de la calculadora.
 *  - Inicializar la memoria a un valor.
 *  - Multiplicar por un numero el contenido de la memoria.
 *  - Dividir entre un numero el contenido de la memoria.
 *  - Sumar un numero al contenido de la memoria.
 *  - Restar un numero al contenido de la memoria.
 */

#include <stdio.h>

double num;

int menu();
void print();
void set();
void sumar();
void restar();
void multiplicar();

int main(){
	int intro=1;
	while(intro!=6){
		switch(auke)
		{
			case 1: printf("Valor actual: %.1f",zenb);break;
			case 2: zenb=Hasieratu();break;
			case 3: zenb=Multi(zenb);break;
			case 4: zenb=Divi(zenb);break;
			case 5: zenb=Suma(zenb);break;
			case 6: zenb=Resta(zenb);break;
			default: printf("Mete una opcion correcta \n");
		}
		intro = menu();
		if(intro==1) print();
		if(intro==2) set();
		if(intro==3) sumar();
		if(intro==4) restar();
		if(intro==5) multiplicar();
		else{ printf("Input ERROR, Número no entre 1 y 6");}	
	}
	

	return 0;
}


int menu(){
	int intro;
	printf("1) Imprimir numero de memoria.\n");
	printf("2) Poner nuevo numero inicial.\n");
	printf("3) Sumar\n");
	printf("4) Restar\n");
	printf("5) Multiplicar\n");
	printf("6) EXIT\n");
	scanf("%d",&intro);
	return intro;
}

void print(){
	printf("********************************\n");
	printf("**Mem NUM := %lf\n", num);
}

void set(){
	double tmp;
	printf("Borrar numero y poner nuevo a la memoria:\n");
	scanf("%lf", tmp);
	num=tmp;
}

void sumar(){
	double tmp;
	printf("Por favor, introduzca un numero para su adición: \n");
	scanf("%lf", tmp);
	num+=tmp;
}


void restar(){
	double tmp;
	printf("Por favor, introduzca un numero para su adición: \n");
	scanf("%lf", tmp);
	num+=tmp;
}


void multiplicar(){
	double tmp;
	printf("Por favor, introduzca un numero para su adición: \n");
	scanf("%lf", tmp);
	num+=tmp;
}
