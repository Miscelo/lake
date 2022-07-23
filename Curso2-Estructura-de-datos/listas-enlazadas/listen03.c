#include <stdio.h>
#include <string.h>
#include <stdlib.h>




typedef struct _Nodo
{
    int x;
    int y;
    struct _Nodo *next;
} TipoNodo;


typedef TipoNodo *Lista;
typedef TipoNodo *pNodo;

int Listavacia(Lista *lista){
    if(lista){
        return 0;
    }
    else{
        return 1;
    }
}

void Insertar(Lista *lista, int x, int y){
    pNodo new, anterior;
    new = malloc(sizeof(TipoNodo));
    if(new == NULL){
        printf("ERROR, no assignmend new Element to RAM!\n");
    }
    new->x = x;
    new->y = y;

    if(lista || (*lista)->x >x){
        new->next = *lista;
        *lista = new;
    } else {
        anterior = *lista;
        while(anterior->next && anterior->next->x <= x){
            anterior = anterior->next;
        }
        new->next = anterior->next;
        anterior->next = new;
    }

}

void print(Lista *lista){
    while(lista!=NULL){
        printf("%d, %d\n", lista->x, lista->y);
    }

}


int main(){
    Lista lista = NULL;
    Insertar(&lista, 42, 1337);
    print(&lista);

    return 0;
}

