
 #include <stdio.h>
 #include <string.h>

 void main()
 {
   //Declaraci�n e inicializaci�n de los arrays
   char cadena1[13] = "buenos días";
   char cadena2[5] = "aeiou";
   int posicion;

   //Guardamos en la variable posicion la primera posici�n
   //donde aparece un caracter de la cadena2 en la cadena1
   posicion=strcspn( cadena1, cadena2 );

   printf("Cadena1 = %s\n",cadena1);
   printf("Cadena2 = %s\n",cadena2);
   printf("Posici�n = %d\n", posicion);


 }
