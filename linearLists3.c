#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct _Nodo{
    int x;
    int y;
    struct _Nodo *next;
} Nodo;


struct _Nodo *lista = NULL;
struct _Nodo *primero = NULL;


int addElement(int x, int y){
    struct _Nodo *puntero;
    /*Add first element if not exist*/
    if(primero == NULL){
        primero = malloc(sizeof(struct _Nodo));
        if(primero==NULL){
            printf("ERROR, not enough Space!");
            return EXIT_FAILURE;
        }
        primero->x = x;
        primero->y = y;
        primero->next = NULL;
        puntero = primero;
        lista = puntero;
        return EXIT_SUCCESS;
    }
    /*If first Element exist, search for element with '*next==NULL' and add data to it*/
    puntero = primero;
    while(puntero->next!=0){
        puntero = puntero->next;
    }
    puntero->next = malloc(sizeof(struct _Nodo));
    if(puntero->next == NULL){
            printf("ERROR, not enough Space!");
            return EXIT_FAILURE;
    }
    puntero = puntero->next;
    puntero->x = x;
    puntero->y = y;
    puntero->next = NULL;
    return EXIT_SUCCESS;
}


void print(){
    lista = primero;
    while(lista!=NULL){
        printf("%d,%d\n", lista->x, lista->y);
        lista = lista->next;
    }
} 

int main(){
    
    if(addElement(42,1337)==0){
        printf("Data added to list!\n");
    }
    addElement(3,6);
    print();

    return EXIT_SUCCESS;
}






