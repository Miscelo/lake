
 #include <stdio.h>
 #include <string.h>


 void main()
 {
     //Declaraci�n e inicializaci�n de los arrays
     char cadenaOrigen[256]="Desarrollo";
     char cadenaDestino[256]="Investigacion";



     //Concatenamos las dos cadenas en la cadena cadenaDestino
     strcat(cadenaDestino,cadenaOrigen);

     printf ("%s",cadenaDestino);

 }
