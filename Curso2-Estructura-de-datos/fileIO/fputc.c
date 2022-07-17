
 #include <stdio.h>

 int main()
 {
   char nb_fichero[10]="info.dat";
   FILE *fichero;
   int i;

   fichero = fopen( nb_fichero, "a" );
   printf( "Nombre del fichero: %s -> ", nb_fichero );
   if( fichero )
      printf( "El fichero se ha podido abrir sin problemas o se ha creado\n" );
   else
   {
      printf( "Problemas al abrir el fichero\n" );
      return 1; //Finlizamos la ejecución
   }

   printf( "Escribimos las 10 primeras letras del alfabeto en el fichero: %s\n\n", nb_fichero );
   for( i=0; i<10; i++)   printf( "%c", fputc('a'+i, fichero) );

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

