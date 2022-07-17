/*
* @autor Michael Schossow
* @name el_Ahorcado
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


typedef enum{false,true} bool;     // declarar tipo boolean, false=0, true=1


// Crear una estructura nombrado Player.
struct Player {
	char name[99];
	int points;
	int failed;
	int tries;
}player;



//Inicialización de las funciones. Orden cronológico es el mismo que se encuentra abajo de la función main.
void intro(struct Player *P1, struct Player *P2);  //explica reglas y pone nombres a los jugadores
int mostrarMenu();  //Imprime el menu principal
void game(struct Player *P);  //contiene todas las funciones para el juego principal
bool letraIsInWord(char *inputVal, char *cad, char *adivina, int len, struct Player *P);   //
void mostrarMisteryArray(char *array, int len);   //imprime cadena por adivinar
void imprimirPuntos(struct Player *P1, struct Player *P2);   //imprime puntos de los dos jugadores
void resetPoints(struct Player *P1, struct Player *P2);   //reseta puntos a 0
int numAleatorio(int max);
const char* categoria(int randomNumber);   //devuelve un pointer a un array
const char* palabraSecreta(int categoria);  //devuelve un pointer a un array
void mostrarAhorcado(struct Player *P);



/* *******************  MAIN FUNCIÓN ************************************************ */
/*  La función main muestra el menu principal y segun elección del jugador,           */
/*  comienza el juego -game()- o se imprime los puntos del jugador o reseta puntos.   */
/* ********************************************************************************** */
int main(){
	static struct Player P1;
	static struct Player P2;
	P1.failed = 0;
	P1.points = 0;
	P2.failed = 0;
	P2.points = 0;

	intro(&P1, &P2);

	int n = mostrarMenu();
	while(n!=4){
    		switch(n){
      			case 1:
              			game(&P1);  //toca al jugador 1
              			game(&P2);  //toca al jugador 2
              			break;
      			case 2:
              			imprimirPuntos(&P1, &P2);
              			break;
      			case 3:
              			resetPoints(&P1, &P2);
              			break;
    		}
    		getchar();
    		n = mostrarMenu();
	}

	printf("\t *** END GAME ***\n");
  	return 0;
}




/* ***Función impime la introducción al juego y pide nombre de los jugadores. */
void intro(struct Player *P1, struct Player *P2){
	printf("***************** BIENVENIDO AL JUEGO *******************\n");
	printf("*                                                       *\n");
	printf("*                  -  El Ahorcado  -                    *\n");
	printf("*                                                       *\n");
	printf("*********************************************************\n");
	printf("*   Me presento, soy Mikel y ¡Te explico las reglas!    *\n");
	printf("*                   El juego es para 2.                 *\n");
	printf("*       El mejor gana, y el peor muere ahorcado.        *\n");
	printf("*               Te puedes permitir 7 fallos             *\n");
	printf("*     Tenéis 10 intentos para adivinar una palabra,     *\n");
	printf("*                 seleccionando letras                  *\n");
	printf("*  Cada letra adivinada da 2 puntos, cada palabra 10.   *\n");
	printf("*                                                       *\n");
	printf("*   ¿Cómo os llamais?  (Eligid vuestros nombres)        *\n");
	printf("*                                                       *\n");
	printf("               JUGADOR 1: ");
	fgets(P1->name,99, stdin);
	printf("               JUGADOR 2: ");
	fgets(P2->name,99, stdin);
	printf("*                                                       *\n");
	printf("*                                                       *\n");
	printf("************** Que comienzen los juegos... **************\n\n\n");
}




/* ***  Simple menu principal que pasa un integer a la función main(), */
int mostrarMenu(){
	char num;
	int n;
	printf("\t1) Nueva partida\n");
	printf("\t2) Puntos\n");
	printf("\t3) resetear Puntos\n");
	printf("\t4) Salir\n");
	scanf("%[1-4]", &num);
	num-=48;   //ascii 49 = 1, ascii 51=3 -> -48
	n=(int)num;  //casting char to int
	return n;
}




/* *** GAME FUNC- aqui se juega la partida cada jugador. */
void game(struct Player *P){
	char sec[8]={};
	char cat[10]={};
	int aleatorio = numAleatorio(4); //devuelve nr aleatoria de 0 a 3
	const char* categ = categoria(aleatorio);  //devuelve categoria
	strcpy(cat, categ);  // cambiar de const char* a char[]
	const char* secreto = palabraSecreta(aleatorio);   //devuelve palabra misteriosa
	strcpy(sec, secreto); // cambiar de const char* a char[]
	size_t len;
	len = (int)strlen(sec);
	char adivina[len];          //crea un array dinamico con la longitud de la palabra secreta.
	for(int i=0;i<len;i++){    //rellena el array con guion bajo
		adivina[i]='_';
	}
	printf("*********************************************************\n");
	printf("\n                   Toca jugar a: %s\n", P->name);
	printf("\n              ***  Categoría: %s  ***\n", cat);
	printf("           La palabra misteriosa tiene %d letras.\n", len);

	char letra[len];
	int i=10;
    	while(i>0){
      		mostrarMisteryArray(adivina, len);
		printf("               ¡Adivina una letra o solucion! ");
		scanf("%s", &letra);
		printf("%s\n", letra);
		printf("%s\n", sec);
		int compare = strcmp(letra,sec); //compara lo introducido con la palabra misteriosa
		printf("iCompare: %d\n", compare);
		if(compare==0){
			P->points+=10;
			printf("\n              *** ¡Has adivinado el misterio! ***\n");
			printf("\n                  La palabra misteriosa es %s.\n\n",sec);
			break;  //Termina bucle si palabra esta descubierta
		}

		bool inword; 
		inword = letraIsInWord(letra, sec, adivina, len, P);
		if(inword==false){
			mostrarAhorcado(P);
			if(P->failed==7){
				printf("\n  ¡¡¡Estas muerto, muerto!!!\n");
				printf("\n      Hasta la próxima.\n");
				break;
			}
		}
		if(i>2){
			printf("\n            Te quedan %d intentos.\n", i-1);
		} else{
			printf("\n        Te queda un último intento.\n");
		}
	i--;
	}
}




/* *** Funcion comprueba si una letra esta una o mas veces en el array misterioso iterando sobre el.
 * Cuando encuentra una letra, lo pasa a la posicion del array con nombre adivina. */
bool letraIsInWord(char *inputVal, char *cad, char *adivina, int len, struct Player *P){
	int ad = *inputVal;
	
	int counter=0;
  	for(int i=0;i<len;i++){
 		if(*(cad+i)==ad){
			*(adivina+i)=*(cad+i);
			P->points+=2;
			counter+=1;
        	}
  		if(*(cad+i)==(ad-32)){  //reconoce las letras mayusculas en el array
  			*(adivina+i)=*(cad+i);
			P->points+=2;
			counter+=1;
  		}
  	}
	if(counter==0){
		P->failed+=1;
		P->points-=1;
		return false;
	} else{
		return true;
	}
}





/* *** funcion imprime el array [_ _ _ _ _ _ ] que durante el juego, los guiones seran sustituidas por letras.*/
void mostrarMisteryArray(char *array, int len){
	printf("\n                      [ ");
	int j;
	for(j=0;j<len;j++){
		printf("%c ", *(array+j));
	}
	printf("]\n\n");
}




/* ***Funcion imprime los puntos de los jugadores. */
void imprimirPuntos(struct Player *P1, struct Player *P2){
		printf("*****************************************\n");
		printf("      Jugador 1           Jugador 2      \n");
		printf("         %d                   %d         \n", P1->points, P2->points);
		printf("*****************************************\n");
	}




/* ***Funcion cambia el valor de la structura Player points a cero de ambos instancias.*/
void resetPoints(struct Player *P1, struct Player *P2){
	P1->points = 0;
	P2->points = 0;
	printf("Puntos reseteados:\n");
	printf("*****************************************\n");
}



/* *** Función devuelve un numero aleatoria entre 0 y max. */
int numAleatorio(int max){
	int aleatorio;
	srand(clock()); //para cambiar el valor inicial de la función rand.
	aleatorio = rand()%max;
	return aleatorio;
}



/*  ***Función devuelve pointer a un array que contiene las categorias del juego*/
const char* categoria(int randomNumber){
	char buffer[10];
	char categorys[4][10] = {"Plantas", "Paises", "Ciudades", "Cantantes"};
	strcpy(buffer, categorys[randomNumber]);
  	char *buff = buffer;
  	return buff;
}



/* ***Función devuele aleatoriamente un string array. Recibe como variable el numero de la categoria.*/
const char* palabraSecreta(int categoria){
	int aleatorio;
	srand(clock());
	aleatorio = rand()%10;
	char buffer[9];
	char cat_Plantas[10][9] = {"Amapola", "Roble", "Lirio", "Palmera", "Pino", "Romero", "Menta", "Girasol", "Hibiscus", "Petunia"};
	char cat_Paises[10][9] = {"Alemania", "Brasil", "China", "Ghana", "Israel", "Japon", "Uganda", "Turquia", "Portugal" ,"Noruega"};
	char cat_Ciudades[10][9] = {"London", "Paris", "Madrid", "Berlin", "Cairo", "Estambul", "Dehli", "Havana", "Toronto", "Atenas"};
	char cat_Singers[10][9] = {"Jackson", "Madonna", "Jagger", "Hendrix", "Marley", "Presley", "Iglesias", "Cobain", "Dilan", "Turner"};
  	switch(categoria){
    		case 0: strcpy(buffer, cat_Plantas[aleatorio]);break;
    		case 1: strcpy(buffer, cat_Paises[aleatorio]);break;
    		case 2: strcpy(buffer, cat_Ciudades[aleatorio]);break;
    		case 3: strcpy(buffer, cat_Singers[aleatorio]);break;
  	}
	char *buff = buffer;  //cambiar a puntero. heap memory not deleted, cuando termina la función.
	return buff;
}





/* *** Función imprime la horca pendiente de los fallos del jugador adivinando una letra.*/
void mostrarAhorcado(struct Player *P){
	switch(P->failed){
		case 0:
			printf("\n");
			printf("   |--------------\n");
			printf("   |/\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("/̣#####\\\n");
			break;
		case 1:
		  printf("\n");
			printf("   |--------------\n");
			printf("   |/            |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("/̣#####\\\n");
			break;
		case 2:
			printf("\n");
			printf("   |--------------\n");
			printf("   |/            |\n");
			printf("   |             O\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("/̣#####\\\n");
			break;
		case 3:
		  printf("\n");
			printf("   |--------------\n");
			printf("   |/            |\n");
			printf("   |             O\n");
			printf("   |             |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("/̣#####\\\n");
			break;
		case 4:
		  printf("\n");
			printf("   |--------------\n");
			printf("   |/            |\n");
			printf("   |             O\n");
			printf("   |		/|\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("/̣#####\\\n");
			break;
		case 5:
		  printf("\n");
			printf("   |--------------\n");
			printf("   |/            |\n");
			printf("   |             O\n");
			printf("   |            /|\\\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("/̣#####\\\n");
			break;
		case 6:
		  printf("\n");
			printf("   |--------------\n");
			printf("   |/            |\n");
			printf("   |             O\n");
			printf("   |            /|\\\n");
			printf("   |            /\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("/̣#####\\\n");
			break;
		case 7:
		  printf("\n");
			printf("   |--------------\n");
			printf("   |/            |\n");
			printf("   |             O\n");
			printf("   |            /|\\\n");
			printf("   |            / \\\n");
			printf("   |\n");
			printf("   |         ¡AHORCADO!\n");
			printf("   |\n");
			printf("/̣#####\\\n");
			break;
	}
}
