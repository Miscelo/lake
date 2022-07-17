/* Mediante un programa leeremos una línea de texto. El texto puede contener
 * espacios en blanco tanto al comienzo, al final o entre las palabras. El programa
 * eliminará los espacios en blanco sobrantes y contabilizará las palabras.
 * Utilizar las siguientes funciones:
 *  DELAN: como entrada toma una cadena de caracteres y nos devuelve la
 *  misma pero sin los espacios en blanco del principio.
 *   ATRAS : igual pero para quitar los espacios en blanco del final.
 *    ENTRE : igual pero eliminará los espacios en blanco sobrantes entre las
 *    palabras. Tan sólo se admite un espacio en blanco entre dos palabras.
 *     CUANTAS : esta función contabilizará el número de palabras del texto.
 */

#include <stdio.h>
#include <string.h>

#define LONGITUD 80

/* Definición de prototipos */
void delan (char frase []);
void atras (char frase []);
void entre (char frase []);
void cuantas (char frase []);
/**********************************************************************************************
 * * *
 * * Descripción: *
 * * El programa eliminará los espacios en blanco de un texto *
 * * y contabilizará el número de palabras *
 * * *
 * Solución Ejercicio Voluntario
 * Página 10 de 23
 * ****************************************************************************/

int main (void)
{
	char frase [LONGITUD];
	/* Leer la frase del teclado*/
	printf ("Introduce una frase\n");
	fgets(frase, LONGITUD+1, stdin);
	/* Procesar la frase*/
	delan (frase);
	atras (frase);
	entre (frase);
	cuantas (frase);
	/* Una vez procesada la frase visualizar el resultado*/
	puts (frase);
	return 0;
}
/**********************************************************************************************
 * * *
 * * Nombre de la función: delan *
 * * Argumentos de entrada *
 * * char frase: la cadena que queremos procesar *
 * * Valor de salida *
 * * char frase: el resultado del procesamiento de la frase *
 * * *
 * * Descripción: *
 * * Tomando como entrada una cadena, la salida será igual pero *
 * * sin los espacios en blanco del comienzo. *
 * ******************************************************************************************/

void delan (char frase []){
	while (frase [0] == ' '){
		strcpy (frase, &frase [1]);
	}
}
/**********************************************************************************************
 * * *
 * * Nombre de la función: atras *
 * * Argumentos de entrada *
 * * char frase: la cadena que queremos procesar *
 * * Valor de salida *
 * * char frase: el resultado del procesamiento de la frase *
 * * Descripción: *
 * * Tomando como entrada una cadena, la salida será igual pero *
 * * sin los espacios en blanco del final. *
 * * *
 * **********************************************************************************************/
void atras (char frase []){
	int longitud, espacios;
	do{
		longitud = strlen (frase);
		if (frase [longitud - 1] == ' ')
		{
			espacios = 1;
			frase [longitud - 1] = '\0';
		}
		else
		{
			espacios = 0;
		}
	}
	while (espacios);
}

/**********************************************************************************************
 * * *
 * * Nombre de la función: entre *
 * * Argumentos de entrada *
 * * char frase: la cadena que queremos procesar *
 * * Valor de salida *
 * * char frase: el resultado del procesamiento de la frase *
 * * *
 * * Descripción: *
 * * Tomando como entrada una cadena, la salida será igual pero *
 * * sin los espacios en blanco entre las palabras. *
 * * *
 * *******************************************************************************************/

void entre (char frase[])
{
	int indice = 0;
	while (indice != strlen (frase))
	{
		if ((frase [indice] == ' ') && (frase [indice + 1] == ' '))
		{
			strcpy (& frase [indice], & frase [indice + 1]);
		}
		else
		{
			frase ++;
		}
	}
}

/**********************************************************************************************
 * * *
 * * Nombre de la función: cuantas *
 * * Argumentos de entrada *
 * * char frase: la cadena que queremos procesar *
 * * Valor de salida *
 * * *
 * * Descripción: *
 * * Tomando como entrada una cadena, esta función contabiliza *
 * * el número de palabras que tiene la frase y visualiza un mensaje. *
 * * *
 * ******************************************************************************************/

void cuantas (char frase[])
{
	int longitud, indice, cont = 0;
	longitud = strlen (frase);
	for (indice = 0; indice < longitud; indice ++)
	{
		if (frase [indice] == ' ')
		{
			cont ++;
		}
	}
	printf ("\n\nLA FRASE TIENE %d PALABRAS\n\n", cont + 1);
}



