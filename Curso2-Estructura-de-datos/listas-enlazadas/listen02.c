/*Listas Enlazadas*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef enum{false, true}bool;


typedef struct _nodo{
    int valor;
    struct _nodo *siguiente;
} TipoNodo;


TipoNodo *lista = NULL;
TipoNodo *pNodo = NULL;   //referencia primer nodo



void crearPrimerNodo(int v){
    TipoNodo *nuevo = malloc(sizeof(TipoNodo));
    if(nuevo==NULL){
        printf("ERROR, no hay espacio!\n");
        return;
    }
    if(pNodo == NULL){
        nuevo->valor = v;
        nuevo->siguiente = NULL;
        lista = nuevo;
        pNodo = nuevo;
    }    
}

void print(){
    lista = pNodo;
    while(lista!=NULL){
        printf("%d\n", lista->valor);
        lista = lista->siguiente;
    }
    printf("-------\n");
}


void insertar(int v){
    lista = pNodo;
    TipoNodo *nuevo = malloc(sizeof(TipoNodo));
    if(nuevo == NULL){
        printf("ERROR, no hay espacio!\n");
        return;
    }
    nuevo->valor = v;
    nuevo->siguiente = NULL;
    while(lista!=NULL){
        if(lista->siguiente == NULL){
            lista->siguiente = nuevo;
            break;
        }
        else{
            lista = lista->siguiente;
        }
    }

    
}


void eliminar(int v){
    lista = pNodo;
    TipoNodo *anterior = NULL;
    while(lista!=NULL){
        if(lista->valor == v){
            if(anterior == NULL){
                pNodo = NULL;
                free(pNodo);
                pNodo = lista->siguiente;
            }
            else{
                anterior->siguiente = NULL;
                free(anterior->siguiente);
                anterior->siguiente = lista->siguiente;
            }
        }
        anterior = lista;
        lista = lista->siguiente;
    }
    

}

bool buscar(int v){
    lista = pNodo;
    while(lista!=NULL){
        if(lista->valor == v){
            return true;
        }
        lista = lista->siguiente;
    }
    return false;
}


int listsize(){
    lista = pNodo;
    int counter = 0;
    while(lista!=NULL)
    {
        counter++;   
        lista = lista->siguiente;
    }
    return counter;
}

int main(){
    crearPrimerNodo(42);
    insertar(5);
    insertar(1337);
    insertar(17);
    insertar(32);
    insertar(55);
    print();
    eliminar(1337);
    print();

    int num = 5;
    if(buscar(num)==true){
        printf("%d está en la lista!\n", num);
    }else{
        printf("%d no está en la lista!.\n", num);
    }

    printf("Tamaño de la lista: %d\n", listsize());

    return EXIT_SUCCESS;
}