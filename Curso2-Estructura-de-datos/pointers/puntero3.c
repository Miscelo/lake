
 #include <stdio.h>

 void main()
 {
    int var=33;

    int *pInt =&var;
    int **ppInt=&pInt;

    printf("\n Valor de var: %d", var);
    printf("\n Valor de pInt: %d", *pInt);
    printf("\n Valor de ppInt: %d", **ppInt);



 }
