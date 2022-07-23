/* Realiza la implementación de una agenda de contactos por medio de una lista simplemente enlazada.
 De cada contacto únicamente queremos saber el nombre y el teléfono.

 1. Crea la estructura adecuada para la definición de la agenda.
 2. Visualiza un menú 1.Insertar contacto,2. Eliminar contacto, 3. Mostrar todos los contactos, 4. Mostrar número de contactos, 5. salir
 3. Añadir contacto al final de la lista.
 4. Eliminar un contacto determinado.
 5. Mostrar la lista completa.
 6. Mostrar lista de contactos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

typedef enum{false, true} bool;

typedef struct _Agenda_
{
    char nombre[MAX];
    int telefono;
    struct _Agenda_ *next;
} Agenda;

//Definicón de variables globales
Agenda *lista = NULL;
Agenda *pNodo = NULL;


int menu(); //función imprime el menú para el usuario.
void insertar(char name[MAX], int tel); //Inserta uno o mas elementos a la lista. 
void eliminar(char name[MAX]);  //Elimina un elemento de la lista eligiendo un nombre.
void printLista();  //Imprime la lista entera, Contacto y su teléfono



int main()
{
    bool loop = true; //Valor para determinar el loop.
    while(loop==true){
        switch(menu()){
            case 1:
                    printf("Isnertar un elemento\n");
                    insertar("Michael", 12345);
                    insertar("Ana", 655555555);
                    insertar("Robert", 655);
                    insertar("Antonio", 1111);
                    insertar("Kafka", 112);
                    break;
            case 2:
                    printf("Elemina un elemento\n");
                    eliminar("Robert");
                    break;
            case 3:
                    printLista();
                    break;
            case 4:
                    printf("4\n");
                    break;
            case 5:
                    printf("\n*********************************************\n"
                            "\tFIN DEL PROGRAMA!\n"
                            "*********************************************\n");
                    loop = false;
                    break;
            default:
                    printf("\n*********************************************\n"
                            "\tINPUT VALUE ERROR!\n"
                            "Elige un numero del menú de 1 a 5 por favor.\n"
                            "*********************************************\n");
                    break;
            
        }
    }
    

    return EXIT_SUCCESS;
}



int menu(){
    int num;
    printf("\n****************  Agenda  *******************\n");
    printf("1. Insertar contacto\n");
    printf("2. Eliminar contacto\n");
    printf("3. Mostrar todos los contactos\n");
    printf("4. Mostrar número de contactos\n");
    printf("5. Salir\n\n");
    printf("\tEligen Usted un numero [1-5]: ");
    scanf("%d", &num);
    printf("\n");
    return num;
}


void insertar(char name[MAX], int tel){
    if(pNodo == NULL)  //Añade primer elemento a la lista si no existe aún.
    {    //comprueba si el puntero de cabeza contiene un Elemento
        Agenda *new = malloc(sizeof(Agenda));
        if(new == NULL){
            printf("ERROR, no se podía asignar espacio en la memoría RAM!\n");
        }
        strcpy(new->nombre,name);
        new->telefono = tel;
        new->next = NULL;
        pNodo = new;
        lista = new;
    } 
    else //Añade un elemento a la lista si ya contiene mínimo un Elemento.
    {
        Agenda *new = malloc(sizeof(Agenda));
        if(new == NULL){
            printf("ERROR, no se podía asignar espacio en la memoría RAM!\n");
        }
        strcpy(new->nombre,name);
        new->telefono = tel;
        new->next = NULL;
        lista = pNodo;
        while(lista!=NULL){
            if(lista->next == NULL){
                lista->next = new;
                break;
            } else{
                lista = lista->next;
            }
        }

    }
}



void eliminar(char name[MAX]){
    bool nombre_existe = false;
    lista = pNodo;  // la lista ponemos al prinicipio para luego recorrerla
    //Primero buscamos el elemento anterior para cambiar la referencia de *next
    Agenda * anterior = NULL;
    while(lista!=NULL){
        if(strcmp(lista->nombre, name) == 0){
            nombre_existe = true;
            if(anterior==NULL){    //El caso de que el usuario quiere eleminar el primer elemento de la lista.
                pNodo = NULL;
                free(pNodo);
                pNodo = lista->next;  //Si se bora el primer elemento, el segundo elemento se convierte en el primero
            }
            else{    //Caso que no se quiere anular el primero elemento. Estamos un elemento atras de lo que queremos eliminar
                anterior->next = NULL;
                free(anterior->next);  
                anterior->next = lista->next; //Vamos un pasa para adelante
            }
        }
        anterior = lista;
        lista = lista->next;
    }
    if(nombre_existe == false){
        printf("Error borrar entrada! Nombre '%s' no existe en Agenda!\n", name);
    }
}


void printLista(){
    lista = pNodo;
    if(pNodo == NULL){
        printf("*********** Lista de Contactos  *************\n\n");
        printf("   No hay Contactos añadidos a la Agenda!\n");
        printf("\n*********************************************\n");
    }
    else
    {
    printf("*********** Lista de Contactos  *************\n\n");
    while(lista!=NULL){
        printf("\t%-20s%d\n", lista->nombre, lista->telefono);
        lista = lista->next;
    }
    printf("\n*********************************************\n");
    }
} 