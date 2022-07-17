/*Lee un carácter y dos números enteros. Si el carácter leído es un operador aritmético calcular la
 * operación correspondiente, si es cualquier otro mostrar error.
 * Hacer el program utilizando la instrucción switch()
 */

#include <stdio.h>
#include <stdbool.h>

bool checkIfNumber(char c);   /*Comprueba con valores ASCII si el char introducido es un número de 0 a 9.*/
void compararNumeros(int a, int b);  /* Funcion comprueba que numero es mayor.*/
void mathOperation(int a, int b, char operator); /* Funcion imprime resultado de operaciones matematicas*/

int main(){
	char ch, operator;
	int x, y;
	printf("Introduzca Usted un número de 0 a 9!: ");
	ch = getchar();

	bool verdad;
	verdad = checkIfNumber(ch);
	if(!verdad)
		printf("ERROR GRAVE!");  // EXTRA da 2 veces ERROR, una en switch, otra aqui.

	fflush(stdin);


	printf("\nIntroduzca Usted dos números enteros: \n");
	scanf("%d %d", &x,&y);
	compararNumeros(x,y);

	printf("Introduzca un operador +,-,*,/: ");
	operator = getchar();
	printf("%d", &operator);
	mathOperation(x,y,'+');
	mathOperation(x,y,'-');
	mathOperation(x,y,'*');
	mathOperation(x,y,'/');

	return 0;
}

bool checkIfNumber(char ch){
	switch(ch){
			case 48: printf("El Numero es un 0.\n");
				return true;
				break;
			case 49: printf("El Numero es un 1.\n");
				return true;
				break;
			case 50: printf("El Numero es un 2.\n");
				return true;
			 	break;
			case 51: printf("El Numero es un 3.\n");
				return true;
			 	break;
			case 52: printf("El Numero es un 4.\n");
				return true;
			 	break;
			case 53: printf("El Numero es un 5.\n");
				return true;
			 	break;
			case 54: printf("El Numero es un 6.\n");
				return true;
			 	break;
			case 55: printf("El Numero es un 7.\n");
				return true;
			 	break;
			case 56: printf("El Numero es un 8.\n");
				return true;
			 	break;
			case 57: printf("El Numero es un 9.\n");
				return true;
			 	break;
			default:
				printf("No ha intruducido número aritmético.\n");
				return false;
	}
}


void compararNumeros(int a, int b){
	if(a>b)
		printf("[%d,%d] - %d es el número mayor\n", a,b,a);
	else if(a<b)
		printf("[%d,%d] - %d es el número mayor\n", b,a,b);
	else
		printf("[%d,%d] - Los numeros son iguales.\n",a,b);
}



void mathOperation(int a, int b, char operator){
	switch(operator){
		case 43:printf("%d + %d = %d\n",a,b,a+b);
			break;
		case 45:printf("%d - %d = %d\n",a,b,a-b);
			break;
		case 42:printf("%d * %d = %d\n",a,b,a*b);
			break;
		case 47:printf("%d / %d = %d modulo %d\n",a,b,a/b,a%b);
			break;
		default:
			printf("No es un operador conocido.\n");
	}
}
