
 #include <stdio.h>

 int main()
 {
   char *nb_fichero="info.dat";
   FILE* fichero;
   int i;

   fichero = fopen(nb_fichero, "r");
   if(fichero!=NULL)
      printf( "El fichero se ha podido abrir sin problemas\n" );
   else
   {
      printf( "Problemas al abrir el fichero\n" );
      return 1; //Finaliza el programa
   }

   for(i=1; i<=10; i++){
     printf("%c", fgetc(fichero));
   }

   fclose(fichero);


   return 0;
 }
