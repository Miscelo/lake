
 #include <stdio.h>
 #include <string.h>
 

 void main()
 {
     //Declaraci�n e inicializaci�n de los arrays
     char cadenaOrigen[256]="aaaaa";
     char cadenaDestino[256]="bbbbb";
     char *mensaje;
     int resultado;

     system("cls");

     //Guardamos en esta variable lo que devuelve la funci�n de comparaci�n
     resultado = strcmp(cadenaDestino,cadenaOrigen);

     switch(resultado)
     {
          case 0:
          {
               mensaje="Ambas son IGUALES\n";
               break;
          }

          default:
          {
               if(resultado > 0)
                    mensaje="cadenaDestino es MAYOR\n";
               else
                    mensaje="cadenaDestino es MENOR\n";
               break;
          }
     }

     printf ("%s",mensaje);

 }
