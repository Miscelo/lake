
 #include <stdio.h>
 #include <string.h>

 void main()
 {
   //Declaraci�n e inicializaci�n del array
   char cadena1[15] = "buenos días";
   char cadena2[15] = "gggg";

   strncpy( cadena1, cadena2, 2 );

   printf("Cadena1 = %s\n",cadena1);
   printf("Cadena2 = %s\n",cadena2);


 }
