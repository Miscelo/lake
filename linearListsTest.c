#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _Coordinates_{
    int x_;
    int y_;
    struct _Coordinates_ *next_;
} Cooridinates;

Cooridinates *list = NULL;    
Cooridinates *first = NULL;  /*guarda referencia del primer elemento, es la cabeza de la lista.*/



void add(int x, int y){
    if(first == NULL){
        Cooridinates *new = malloc(sizeof(Cooridinates));
        new->x_ = x;
        new->y_ = y;
        new->next_ = NULL; /*el úlimto pointer next de la lista tiene que ser nulo. Es para saber el final de la cadena*/
        list = new; /* LA instancia de list (aqui global) se asigna la instancia new*/
        first = new; /*guarda cual es la primera de la lista (Cabeza de la cadena)*/
    }
    else {

        Cooridinates * new = malloc(sizeof(Cooridinates));
        new->x_ = x;
        new->y_ = y;
        new->next_ = NULL; /*Tiene que indicar 0 porque es el último elemento de la lista*/
        list = first; /* lista se da para atras al principio de la lista.*/
        while(list!=NULL){
            if(list->next_ == NULL){ /*comprobamos con en loop sobre los elementos de lista si el prçoximo elemento es NULL*/
                list->next_= new;
                break;  
            } else {
                list = list->next_;
            }
        }
    }
}


void print(){
    printf("------------------------\n");
    list = first; /*para que la instancia liste vuelva a la instancia de la cabeza de la lista*/
    while(list!=NULL){        
        printf("[%d,%d]\n", list->x_, list->y_);
        list = list->next_;    /* apunta al próximo elemento de la lista*/
    }
}


void del(int x, int y){
    list = first;
    /*buscar elemento anterior para cambiar la referencia de *next*/
    Cooridinates * previous = NULL;
    while(list!=NULL){
        if(list->x_ == x && list->y_ == y){
            if(previous==NULL){    /* en el caso de que el usuario quiere eleminar el primer elemento de la lista.*/
                first = NULL;
                free(first);
                first = list->next_;  /*Si se bora el primer elemento, el segundo elemento se convierte en el first*/
            }
            else{    /*Caso que no se quiere anular el primero elemento. Estamos un elemento atras de lo que queremos eliminar*/
                previous->next_ = NULL;
                free(previous->next_);  
                previous->next_ = list->next_; /*Vamos un pasa para adelante*/
            }
        }
        previous = list;
        list = list->next_;
    }
}


int main(){
    add(41, 1337);
    add(0,1);
    add(3,4);
    add(1,2);
    add(7,43);
    print();
    del(1,2);   // elimina el par de coordenadas 1,2
    del(7,43);  // elimina el par de coordenadas 7,42
    print();
    add(42,1337);
    print();
    del(42,1337);  //elimina el primer y el ultimo elemento que ahora son 42,1337 en ambos casos.
    print();
    free(list);
    return EXIT_SUCCESS;
}
