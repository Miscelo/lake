#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Definición de una structura del Jugador.
struct Player {
	char name[99];
	int playedGames;
	int points;
	int failed;
	int tries;
}player;

void puntos(struct Player *P);
int mostrarPuntos(struct Player *P1, struct Player *P2);
int mainMenu();


int main(){
  static struct Player P1;
	static struct Player P2;
	P1.failed = 0;
	P1.points = 0;
	P2.failed = 0;
	P2.failed = 0;
  int jugador = 1;
  int n;
  n = mainMenu();

  while(n!=3){
    while(P1.failed<7){
      (jugador==1)? printf("Spieler 1 active\n"):printf("Spieler 2 active\n");
      (jugador==1)? puntos(&P1):puntos(&P2);
      mostrarPuntos(&P1, &P2);
      if(jugador==1){
        jugador=2;
      } else{
        jugador=1;
      }
      n=mainMenu();
    }
  }
  return 0;
}


void puntos(struct Player *P){
  P->points+=2;
}

int mostrarPuntos(struct Player *P1, struct Player *P2){
  printf("Spieler 1: %d Punkte   |   Spieler 2: %d Punkte", P1->points, P2->points);
}


int mainMenu(){
	printf("Elije tu numero:\n");
	printf("1) Jugar\n");
	printf("2) Puntos\n");
	printf("3) Salir\n");
	int n;
	scanf("%d", &n);
	return n;
}
