// Pointer auf einen Struct


 #include <stdio.h>
 #include <string.h>

 struct Matrimonio
 {
    char marido[20];
    char mujer[20];
 };

 int main()
 {

    struct Matrimonio stMiMatrimonio = {"Adan","Eva"};
    struct Matrimonio* pMatrimonio;
    pMatrimonio = &stMiMatrimonio;



    void* pGenerico;
    pGenerico = &stMiMatrimonio;

    printf("\n El nombre de la variable es: pGenerico");
    printf("\n El tipo de la variable es: void* (Puntero Genórico)\n");

    printf("\n El valor de la variable es: %p",pGenerico);
    printf("\n LA direccion de la structura es: %p\n",&stMiMatrimonio);

    printf("\n La dirección que ocupa la variable es: %p", &pGenerico);
    printf("\n El contenido de la variable a la que apunta pGenerico es: %s\n", ((struct Matrimonio*) pGenerico)->mujer);

    printf("\n El contenido de la variable a la que apunta pMatrimonio es: %s", ((struct Matrimonio*) pMatrimonio)->marido);
    printf("\n");

    return 0;
 }
