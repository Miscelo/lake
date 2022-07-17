/*
* @autor Michael Schossow
* @name el_Ahorcado
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>




struct Player {
	char name[99];
	int playedGames;
	int points;
	int failed;
	int tries;
}player;


void intro(struct Player *P1, struct Player *P2);  //explica reglas
int mostrarMenu();  //Imprime el menu principal
void game(struct Player *P);
void printArray(char *array, int len);
void imprimirPuntos(struct Player *P1, struct Player *P2);   //imprime puntos de los dos jugadores
void resetPoints(struct Player *P1, struct Player *P2);   //reseta puntos a 0
void guess(char *cad, char *adivina, int len);
int numAleatorio(int max);
const char* categoria(int randomNumber);   //devuelve un pointer a un array
const char* palabraSecreta(int categoria);  //devuelve un pointer a un array



//********************  MAIN **************************************************
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
              game(&P1);
              game(&P2);
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

  printf("FIN");
  return 0;
}




void intro(struct Player *P1, struct Player *P2){
	printf("***************** BIENVENIDO AL JUEGO *******************\n");
	printf("*                                                       *\n");
	printf("*                  -  El Ahorcado  -                    *\n");
	printf("*                                                       *\n");
	printf("*********************************************************\n");
	printf("*   Me presento, soy Mikel y ¡Te explico las reglas!    *\n");
	printf("*                   El juego es para 2.                 *\n");
  printf("*       El mejor gana, y el peor muere ahorcado.        *\n");
	printf("*     Tenéis 7 intentos para adivinar una palabra,      *\n");
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



int mostrarMenu(){
  char num;
  int n;
  printf("1) Nueva partida\n");
  printf("2) Puntos\n");
  printf("3) resetear Puntos\n");
  printf("4) Salir\n");
  scanf("%[1-4]", &num);
  num-=48;   //ascii 49 = 1, ascii 51=3 -> -48
  n=(int)num;  //casting char to int
  return n;
  }


  // GAME FUNC- aqui se juega la partida cada jugador.
  void game(struct Player *P){
    char sec[8]={};
	  char cat[10]={};
	  int aleatorio = numAleatorio(4); //devuelve nr aleatoria de 0 a 3
	  const char* categ = categoria(aleatorio);  //devuelve categoria
		strcpy(cat, categ);  // cambiar de const char* a char[]
		const char* secreto = palabraSecreta(aleatorio);   //devuelve palabra misteriosa
	  strcpy(sec, secreto); // cambiar de const char* a char[]
	  int len = strlen(sec);
		char adivina[len];          //crea un array dinamico con la longitud de la palabra secreta.
		for(int i=0;i<len;i++){    //rellena el array con guion bajo
			adivina[i]='_';
		}
    int i=0;
    while(i<7){
      printf("GAME points, %d\n", P->points);
      P->points+=2;
      i++;
    }
  }



  void printArray(char *array, int len){
	printf("\n                [ ");
	int j;
	for(j=0;j<len;j++){   //bucle for para pasar al standard output stream cada entrada del array
		printf("%c ", *(array+j));
	}
	printf("]\n\n");
}




  void imprimirPuntos(struct Player *P1, struct Player *P2){
    printf("*****************************************\n");
    printf("      Jugador 1           Jugador 2      \n");
    printf("         %d                   %d         \n", P1->points, P2->points);
    printf("*****************************************\n");
}

  void resetPoints(struct Player *P1, struct Player *P2){
    P1->points = 0;
    P2->points = 0;
    printf("Puntos reseteados:\n");
    printf("*****************************************\n");
  }


  // Funktion soll schauen, ob Buchstabe im Wort.
  void guess(char *cad, char *adivina, int len){
  	printf("\nSecreto: %s\n\n", cad);
  	printf("               ¡Adivina una letra! ");
    char ad;
    ad=getchar();
    printf("%c\n", ad);
  	for(int i=0;i<len;i++){
        if(*(cad+i)==ad){
          *(adivina+i)=*(cad+i);
        }
  			if(*(cad+i)==(ad-32)){  //reconoce las letras mayusculas en el array
  				*(adivina+i)=*(cad+i);
  			}
  	}
  	fflush(stdin);
  }


int numAleatorio(int max){
  int aleatorio;
  srand(clock()); //para cambiar el valor inicial de la función rand,
  aleatorio = rand()%max;
  return aleatorio;
}



const char* categoria(int randomNumber){
  char buffer[10];
  char categorys[4][10] = {"Plantas", "Paises", "Ciudades", "Cantantes"};
	strcpy(buffer, categorys[randomNumber]);
  char *buff = buffer;
  return buff;
}


//Función devuele aleatoriamente un string array
const char* palabraSecreta(int categoria){
  int aleatorio;
  srand(clock());
  aleatorio = rand()%10;
	char buffer[9];
	char cat_Plantas[10][9] = {"Álamo", "Roble", "Ciprés", "Palmera", "Pino", "Romero", "Menta", "Girasol", "Tulipán", "Petunia"};
	char cat_Paises[10][9] = {"Alemania", "Brasil", "China", "Ghana", "Israel", "Japón", "Uganda", "Turquía", "Portugal" ,"Noruega"};
	char cat_Ciudades[10][9] = {"London", "Paris", "Madrid", "Berlin", "Cairo", "Estambul", "Dehli", "Havana", "Toronto", "Atenas"};
	char cat_Singers[10][9] = {"Jackson", "Madonna", "Jagger", "Hendrix", "Marley", "Presley", "Iglesias", "Cobain", "Dilan", "Turner"};
  switch(categoria){
    case 0: strcpy(buffer, cat_Plantas[aleatorio]);break;
    case 1: strcpy(buffer, cat_Paises[aleatorio]);break;
    case 2: strcpy(buffer, cat_Ciudades[aleatorio]);break;
    case 3: strcpy(buffer, cat_Singers[aleatorio]);break;
    default: strcpy(buffer, "ERROR!");
  }
	char *buff = buffer;  //cambiar a puntero. heap memory not deleted, cuando termina la función.
	return buff;
}
