 #include <stdio.h>

 int main()
 {
   char nb_fichero[10]="info.dat", cadena[15];
   FILE *fichero;

   fichero = fopen( nb_fichero, "r" );
   printf( "Nombre del fichero: %s -> ", nb_fichero );
   if( fichero )
      printf( "El fichero se ha podido abrir sin problemas o se ha creado\n" );
   else
   {
      printf( "Problemas al abrir el fichero\n" );
      return 1; //Finlizamos la ejecución
   }

   printf( "La primera cadena de 15 posiciones del fichero es: %s\n\n", nb_fichero );
   printf( "%s\n", fgets(cadena, 15, fichero) );

   if( !fclose(fichero) )
      printf( "\nFichero cerrado correctamente" );
   else
   {
      printf( "\nFichero no cerrado correctamente" );
      return 1; //Finaliza el programa

   }
   getch();
   return 0;
 }
 
 

