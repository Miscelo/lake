#include <stdio.h>
#include <time.h>

#define DIMENSION 3
#define VALOR_MAXIMO 10

void visualizaMatriz(int matriz[DIMENSION][DIMENSION]);
void crearMatriz(int matriz[DIMENSION][DIMENSION]);
int obtenerNumeroAleatorio(const int numeroMaximo);



int main(){
	int matriz[DIMENSION][DIMENSION];  //Declaración de la matriz
	crearMatriz(matriz);
	visualizaMatriz(matriz);
	return 0;
}




// imprime la matriz 3x3
void visualizaMatriz(int matriz[DIMENSION][DIMENSION]){
	int i,j;
	for(i=0;i<DIMENSION;i++){
		printf("[");
		for(j=0;j<DIMENSION;j++){
			printf("%d",matriz[i][j]);
			(j<DIMENSION-1)? printf(","):printf("]\n");
		}
	}
}


//matriz de 3x3 aleatoria 	
void crearMatriz(int matriz[DIMENSION][DIMENSION]){
	int i,j;
	for(i=0;i<DIMENSION;i++){
		for(j=0;j<DIMENSION;j++){
			matriz[i][j]=obtenerNumeroAleatorio(VALOR_MAXIMO);
		}
	}
}

//devuelve un numero aleatorio entre 0 y 9
int obtenerNumeroAleatorio(const int numeroMaximo){
	int random;
	srand(clock());
	random = rand()%numeroMaximo;
	return random;
}
