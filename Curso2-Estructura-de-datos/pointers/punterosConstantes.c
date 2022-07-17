
 #include <stdio.h>

 void main()
 {
    char vocales[]="EEIOU";
    //Cada elemento char de las cadenas se ubican en una direcci�n de memoria

    char *const pVocales = vocales;
    //El puntero pObjeto apunta a la primera direcci�n de memoria que ocupa
    //el array vocales. El valor de ese puntero no se podr� modificar, pero
    //si el contenido de la variable que apunta

    printf("\n Objeto: %s", pVocales);

    pVocales[0] = 'A';

    printf("\n Objeto: %s", pVocales);


 }
