#include <stdio.h>

int main()
{
   FILE *fichero;
   char *nb_fichero = "info.dat";
   int array_enteros[5] = {10, 20, 30, 40, 4};
   int leer[5];

   fichero = fopen(nb_fichero, "w+");
   if(fichero!=NULL){
      printf( "El fichero se ha podido abrir sin problemas o se ha creado\n" );
   }else{
      printf( "Problemas al abrir el fichero\n" );
      return 1; //Finlizamos la ejecuci�n
   }

   fwrite(array_enteros, sizeof(char), 20, fichero);
   rewind(fichero);
   fread(leer, sizeof(unsigned int), 5, fichero);

   for(int i=0; i<5; i++)
     printf("%d\t", leer[i]);

   if( !fclose(fichero) )
      printf( "\nFichero cerrado correctamente" );
   else
   {
      printf( "\nFichero no cerrado correctamente" );
      return 1; //Finaliza el programa

   }

   return 0;
}
