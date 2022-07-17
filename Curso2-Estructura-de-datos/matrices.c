
 #include <stdio.h>


 #define DIMENSION 3
 #define VALOR_MAXIMO 10

 void visualizaMatriz(int[DIMENSION][DIMENSION]);
 void cargarMatriz(int[DIMENSION][DIMENSION]);
 int obtenerNumeroAleatorio(const int numeroMaximo);

 void main()
 {

     //Declaraci�n de la matriz
     int matriz[DIMENSION][DIMENSION];

     //Limpiamos la pantalla
     system("cls");
     //Inicializamos la semilla de la obtenci�n de n�meros aleatorios
     srand(time(NULL));

     //Procedemos con la carga de datos
     cargarMatriz(matriz);

     //Procedemos con la visualizaci�n de datos de la matriz
     visualizaMatriz(matriz);


 }

 int obtenerNumeroAleatorio(const int numeroMaximo)
 {

   return(rand()%numeroMaximo);
 }

 void cargarMatriz(int matriz[DIMENSION][DIMENSION])
 {
     int i,j;

     //Bucles para cargar los valores aleatorios a cada posici�n de la matriz
     for(i=0;i<DIMENSION;i++)
     {
          for(j=0;j<DIMENSION;j++)
          {
               matriz[i][j]=obtenerNumeroAleatorio(VALOR_MAXIMO);
          }
     }
 }

 void visualizaMatriz(int matriz[DIMENSION][DIMENSION])
 {
     int i,j;

     //Bucles para visualizar los valores de cada posici�n de la matriz
     for(i=0;i<DIMENSION;i++)
     {
          printf("\n");

          for(j=0;j<DIMENSION;j++)
          {
               printf("[%d]    ",matriz[i][j]);
          }
     }
 }
