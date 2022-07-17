/* Ejercicio Voluntario M032_UD03_EV1_V002  - Ejercicio 4
 * Crear un array de 50 números aleatorios y después un array de 50 punteros
 * donde cada uno apunte a los números anteriores.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

	char a = 'a';
	char *ptr;
	ptr=&a;

	char **p;
	p=&ptr;


	//misma direccion
	printf("%p\n", ptr);
	printf("%p\n", *p);

	// direcction del punter segundo, unico
	printf("%p\n", p);

	// a
	printf("%c\n", *ptr);
	printf("%c\n", **p);


	return 0;
}
