
 #include<stdio.h>
 #include<string.h>

 void main()
 {
     //Declaraci�n e inicializaci�n de los arrays
     char cadena1[]="aaaaa";
     char cadena2[]="bbbbb";

     //Copia en cadena2 el contenido de cadena1
     strcpy(cadena2,cadena1);

     printf("Cadena1 = %s\n",cadena1);
     printf("Cadena2 = %s\n",cadena2);

  
 }
