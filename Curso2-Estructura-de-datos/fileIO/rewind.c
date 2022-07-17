#include <stdio.h>

int main()
{
  FILE *fichero;
  char nb_fichero[11] = "info.dat", cadena[30]="abeurp fgetpos y fsetpos";
  fpos_t posicion;
  fpos_t comienzo;
  //fpos_t es un tipo de objeto capaz de almacenar toda la información 
  //necesitada para especificar únicamente cada posición dentro del fichero.

  fichero = fopen(nb_fichero, "w+" );
  if(fichero!=NULL)
      printf( "El fichero se ha podido abrir sin problemas o se ha creado\n" );
  else
  {
      printf( "Problemas al abrir el fichero\n" );
      return 1; //Finlizamos la ejecución
  }

  fgetpos(fichero, &comienzo);
  printf( "Posicion del fichero: %d\n", posicion );

  fprintf(fichero, cadena);
  printf("\nEscrito: \"%s\"\n", cadena);

  fgetpos(fichero, &posicion);
  printf("Posicion del fichero: %d\n", posicion);

  fsetpos(fichero, &comienzo);
  fprintf(fichero, "%s", "Esto es una prueba");
  printf("Corregiendo errores...Escrito: \"Esto es una prueba\"\n");

  fgetpos(fichero, &posicion);
  printf("Posicion del fichero: %d\n", posicion);

  rewind(fichero);
  printf("\"Rebobinando\" el fichero -> Vuelta al comienzo\n" );
  fgetpos(fichero, &posicion);
  printf("Posicion del fichero: %d\n", posicion);

  printf("\nLeyendo del fichero \"%s\"\n", nb_fichero);
  fgets(cadena, 30, fichero);  //cadena liesst von position 1-18 (esto es una prueba) y luego la cacena a partir de 18
  printf("\"%s\"\n\n", cadena);

  fgetpos(fichero, &posicion);
  printf("Posicion del fichero: %d\n", posicion);

   if(!fclose(fichero))
      printf( "\nFichero cerrado correctamente" );
   else
   {
      printf( "\nFichero no cerrado correctamente" );
      return 1; //Finaliza el programa

   }
  
  return 0;
}
