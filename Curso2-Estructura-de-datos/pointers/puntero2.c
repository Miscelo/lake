
 #include <stdio.h>

 void main()
 {
    int var;

    var=33;

    int *pInt =&var;
    int *pInt2; // NO INICIALIZADO

    printf("\n El nombre de la variable es: var");
    printf("\n El tipo de la variable es: int");
    printf("\n El valor de la variable es: %d",var);
    printf("\n La direcci�n que ocupa la variable es: %x", &var);
    printf("\n");
    printf("\n El nombre de la variable es: pInt");
    printf("\n El tipo de la variable es: *int, puntero a entero");
    printf("\n El valor del puntero a la variable es: %x",pInt);
    printf("\n La direcci�n que ocupa la variable que apunto es: %x", &pInt);
    printf("\n El contenido de la variable a la que apunto es: %d", *pInt);
    printf("\n");
    printf("\n El nombre de la variable es: pInt2");
    printf("\n El tipo de la variable es: *int, puntero a entero");
    printf("\n El valor del puntero a la variable es: %x",pInt2);
    printf("\n La direcci�n que ocupa la variable que apunto es: %x", &pInt2);
    printf("\n El contenido de la variable a la que apunto es: %d", *pInt2);

    
 }
