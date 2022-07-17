 #include <stdio.h>

 int main()
 {
   char nb_fichero[11]="info.dat";
   FILE *fichero;

   fichero = fopen( nb_fichero, "w" );
   printf( "nb_fichero del fichero: %s -> ", nb_fichero );
   if( fichero )
      printf( "El fichero se ha podido abrir sin problemas o se ha creado\n" );
   else
   {
      printf( "Problemas al abrir el fichero\n" );
      return 1; //Finlizamos la ejecución
   }

   fputs( "Ejemplo usando \'fputs\'\n", fichero );

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
