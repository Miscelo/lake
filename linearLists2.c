#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 32

typedef enum{false, true}bool;

typedef struct _Employee_{
    int id;
    char name[MAX];
    float weight;
    struct _Employee_ *next;
} Employee;

//variables Globales;
Employee *list = NULL;
Employee *first = NULL;

//Crea el primer elemento en la lista
void firstEntry(char ename[32], float weight);

//Imprime a stdout las entradas.
void printList();

//Crea una nueva entrada en la lista, (append) al final
void addEntry(char ename[32], float weight);

//Borra una entrada de la lista referiendose a su id
void delEntry(int id);

int listlen();
void userInput();

int main(){

    firstEntry("Michael",76.8);
    addEntry("ANA",56.3);
    addEntry("Peter",98.2);
    addEntry("Robert",67.4);
    printList();
    delEntry(3);
    printList();   
    addEntry("Jochen",88.8);
    addEntry("Anotonio",105.2);
    addEntry("Seppel", 120.3);
    printList();
    listlen();
    return EXIT_SUCCESS;
}


void userInput(){
    printf("Introduzca un nombre");
}

int listlen(){
    list = first;
    int counter = 1; // Counter 1 , porque primer elemento ya está en lista
    while(list!=NULL){
        counter++;
        list = list->next;
    }
        printf("%d\n", counter);
    printf("---\n");
    return counter;
}

//Crea el primer elemento en la lista
void firstEntry(char ename[MAX], float weight){
    Employee *new = malloc(sizeof(Employee));
    new->id = 1;
    strcpy(new->name, ename);
    new->weight = weight;
    new->next = NULL;
    first = new;
    list = first;
}


//Imprime a stdout las entradas.
void printList(){
    list = first;
    while(list!=NULL){
        printf("%d, %s, %.1f\n", list->id, list->name, list->weight);
        list = list->next;
    }
    printf("--------------------\n");
}

void addEntry(char ename[MAX], float weight){
    Employee *new = malloc(sizeof(Employee));
    new->id = listlen();
    strcpy(new->name, ename);
    new->weight = weight;
    new->next = NULL;
    list = first;
    while(list!=NULL){
        if(list->next == NULL){
            list->next = new;
            break;
        }
        else{
            list = list->next;
        }
        
    }

}

void delEntry(int id){
    bool idexist = false;    
    list = first;
    Employee * previous = NULL;
    while(list!=NULL){
        if(list->id == id){
            idexist = true;
            if(previous==NULL){
                first=NULL;
                free(first);
                first = list->next;
            }
            else{
                previous->next = NULL;
                free(previous->next);
                previous->next = list->next;

            }
        }
        previous = list;
        list = list->next;
    }
    if(idexist==false){
        printf("Error borrar entrada! ID '%d' no existe!\n", id);
    }
}