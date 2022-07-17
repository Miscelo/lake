#include <stdio.h>
#include <string.h>

int main()
{
  FILE *fichero;
  char *nb_fichero = "test.txt", mensaje[81]="";
  long int comienzo, final;

  fichero = fopen(nb_fichero, "r" );
  if(fichero!= NULL){
      printf( "El fichero se ha podido abrir sin problemas o se ha creado\n" );
  }else{
  	printf( "Problemas al abrir el fichero\n" );
        return 1; //Finlizamos la ejecuci�n
  }

  if((comienzo = ftell(fichero)) < 0 ){
       printf( "ERROR: ftell no ha funcionado\n" );
  }else{
      	  printf( "Posicion del fichero: %d\n\n", comienzo );
  }

  fseek(fichero, 0L, SEEK_END);  // geh zum ende des files
  final = ftell(fichero);

  fseek(fichero, 0L, SEEK_SET);
  fgets( mensaje, 80, fichero );
  printf( "SIZE del fichero \"%s\": %d bytes\n", nb_fichero, final-comienzo+1 );    
  printf( "Mensaje del fichero: %s\n", mensaje );
  printf( "SIZE del mensaje (usando strlen): %d\n", strlen(mensaje) );

  if(!fclose(fichero)){
      printf( "\nFichero cerrado correctamente" );
  }else{
      printf( "\nFichero no cerrado correctamente" );
      return 1; //Finaliza el programa
  }

  return 0;
}
