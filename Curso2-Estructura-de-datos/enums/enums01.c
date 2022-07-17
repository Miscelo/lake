/* Las enumeraciones se refieren a definiciones de tipos basadas en constantes enteras.
Un tipo enum consta de una serie de constantes que se inician normalmente en un
valor 0 y que aumentan su valor de forma consecutiva.*/

/*Es posible asignarle directamente un valor a cualquiera de las constantes que forman
la enumeración, de tal forma que las siguientes aumentarían en una unidad y de forma
consecutiva con la constante inmediatamente anterior.*/

#include <stdio.h>


enum dias{
  Lunes=1,
  Martes,
  Miercoles,
  Jueves,
  Viernes,
  Sabado,
  Domingo
};


int main(){

  enum dias dia;

  for(dia=Lunes; dia<=Domingo; dia++){
    printf("%d\n", dia);
  }



  return 0;
}
