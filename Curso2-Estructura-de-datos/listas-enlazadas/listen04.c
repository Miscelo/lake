/*Listas dooblemente enlazadas*/


#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <string.h>
#include <ctype.h>

struct Producto
{
    char nombre [20];   //Nombre del producto
    float precio;       //Precio del producto
    int cantidad;       //Unidades del producto
};

struct Nodo             //Nodo de la lista
{
    struct Producto p;  //Información del Producto
    struct Nodo* pSig;  //Puntero al Siguiente Elemento (Nodo) de la lista
    struct Nodo* pAnt;  //Puntero al Anterior Elemento (Nodo) de la lista
};

typedef struct Nodo* pNodo;  //Alias para puntero a struct Nodo (pNodo)

//Prototipos de funciones
char menu(void);                        //Menu principal
void mostrar_elemento(pNodo);            //Muestra por pantalla un producto
void dibujar_navegacion(pNodo);         //Dibuja las opcioens de navegación
pNodo navegacion(pNodo);                //Devuelve el próximo elemento a visualizar
struct Producto informar_datos_producto(void);      //Devuelve un producto informado
void insertar_despues(pNodo pExistente, struct Producto* p);
void insertar_antes(pNodo pExistente, struct Producto* p);
void agregar_producto(pNodo* inicioLista, struct Producto* p);
int comparar(struct Producto* p1, struct Producto* p2);
float calcular_importe(pNodo);
void mensajeTotal(float total);
void mensajeListaVacia(void);

int main()
{
    pNodo pCabeza;      //Puntero al primero Nodo de la lista
    pNodo pActual;      //Apunta la elemento que se está visualizando
    int fin=0;          //Interruptor para salir de los bucles
    
    struct Producto producto;   //Elemento de tipo Producto
    
    pCabeza = NULL;             //Inicialización de la cabeza de la lista
    
    do
    {
        switch (menu())
        {
            case '1':     //Opción Agregar producto
            {
                //system("clear");
                //plantilla_visualizacion();  //Presenta la plantilla de datos
                producto=informar_datos_producto();     //Obtiene producto con datos    
                
                agregar_producto(&pCabeza,&producto);   //Lo agrega a la lista
                
                break;
            }

            case '2':       //Opcion Visualizar Productos (Navegar por la lisa)
            {
                if (pCabeza)    //La lista tiene elementos, es decir, no está vacía
                {
                    pActual=pCabeza;
                    
                    //system("clear");
                    //plantilla_visualizacion(); //Se imprime la plantilla de datos
                    
                    do
                    {
                        mostrar_elemento(pActual);
                        dibujar_navegacion(pActual);
                        pActual=navegacion(pActual);
                    }
                    while(pActual); //Hasta que devuelve valor NULL
                }
                else
                {
                    mensajeListaVacia();
                }
                break;
            }
            
            case '3':   //Opción obtiene el importe o cuantia de la lista de productos
            {
                mensajeTotal(calcular_importe(pCabeza));
                break;
            }
            
            case '0':       //Opción salir de la aplicación
            {
                fin=1;
                break;
            }
        }
        
    }while(!fin);   //Hasta que fin sea distinto de cero
        
    return 0;
}
                    
char menu()
{

    
    char c;
    
    //system("clear");
    

    printf("(1) - Agregar Producto\n\n");
    

    printf("(2) - Navegar por Lista\n\n");        


    printf("(3) - Obtener Total\n\n");      
    

    printf("(0) - Salir\n\n\n\n");      
    

    printf("Elija opción: ");  

    do
    {

        fflush(stdin);
        c=getchar();
    }
    while((c<'0')||(c>'3'));
    
    return c;
}

struct Producto informar_datos_producto()
{
    struct Producto p;
     

    printf("\nNombre Producto: ");
    fgets(p.nombre, 20, stdin);
    

    printf("\nPrecio: ");
    scanf("%f",&(p.precio));
    

    printf("\nCantidad: ");
    scanf("%d",&(p.cantidad));    
    
    return p;
}
    
void agregar_producto(pNodo* inicioLista, struct Producto* p)
{
    pNodo pRec;     //Puntero para recorrer la lista
    
    int continuar=1;    //Interruptor del bucle
    int comparacion;    //Almacena el resultado devuelto por la función comparar
    
    pRec=*inicioLista;
    
    if(pRec)    //Si la lista tiene elementos, es decir, si no está vacía
    {
        while(continuar==1)
        {
            comparacion=comparar(&(pRec->p),p); //Compara el producto apuntado por pRec y el que deseamos insertar
            
            if(comparacion>=1)      //El elemento a insertar va antes que el actual
            {
                insertar_antes(pRec,p);     //Se llama a la función apropiada
                
                if(pRec==*inicioLista)  //Si el nuevo elemento es el primeso se corrige el valor de la Cabeza
                {
                    *inicioLista=pRec->pAnt;
                }
            }
            else
            {      //El elemento se inserta después del actual
                if(pRec->pSig)  //Si hay más elementos nos posicionamos en el siguiente
                {
                    pRec=pRec->pSig;
                }
                else    //No hay más elementos, la inserción será en la cola de la lista
                {
                    insertar_despues(pRec,p);
                    continuar=0;    //fin del bucle
                }
            }
        }
    }
    else    //La lista está vacia, el nuevo elemento se situa en la cabeza
    {
        *inicioLista=(pNodo) malloc(sizeof(struct Nodo)); //SE asigna valor al puntero de la cabeza de la lista
        (*inicioLista)->p=*p;
        (*inicioLista)->pSig=NULL;
        (*inicioLista)->pAnt=NULL;
    }
}

void insertar_despues(pNodo pExistente, struct Producto* p)
{
    pExistente->pSig=(pNodo)malloc(sizeof(struct Nodo));    //Se crea el Nodo
    
    pExistente->pSig->p=*p;     //Se asigna el producto
    
    //Se ajustan los punteros
    pExistente->pSig->pSig=NULL;    
    pExistente->pSig->pAnt=pExistente;    
}

void insertar_antes(pNodo pExistente, struct Producto* p)
{
    pNodo pNuevo=(pNodo)malloc(sizeof(struct Nodo));    //Se crea el Nodo
    
    //Se asignan datos
    pNuevo->p=*p;
    pNuevo->pSig=NULL;
    pNuevo->pAnt=NULL;
    
    //Se asjustan los punteros
    if(pExistente->pAnt)    //El actual tiene un predecesor que no es la cabeza
    {
        pExistente->pAnt->pSig=pNuevo;
        pNuevo->pAnt=pExistente->pAnt;
        
        pExistente->pAnt=pNuevo;
        pNuevo->pSig=pExistente;
    }
    else        //Es el primero de la lista
    {
        pExistente->pAnt=pNuevo;
        pNuevo->pSig=pExistente;
        
        pNuevo->pAnt=NULL;
    }
}

int comparar(struct Producto* p1, struct Producto* p2)
{
    int respuesta;
    int diferencia;
    
    respuesta=strcmp(p1->nombre,p2->nombre);    //Compara por el nombre
    
    if(respuesta==0)        //Si coincide el nombre
    {
        diferencia=(p1->precio) - (p2->precio); //Se calcula la diferencia de precio
        
        if(diferencia==0) //Si el precio es idéntico
        {
            diferencia=(p1->cantidad) - (p2->cantidad); //Se calcula la diferencia de cantidad
            
            respuesta=diferencia;
        }
        else
        {      //El precio es distinto
            respuesta=diferencia;
        }
    }
    return respuesta;
}

void dibujar_navegacion(pNodo ptrNodo)
{
    printf("\n (0) - Salir");
    
    //Si hay puntero anterior se dibuja la interfaz Anterior
    if(ptrNodo->pAnt)
    {
        printf("\n(A) - Anterior: ");
    }
    
    if(ptrNodo->pSig)
    {
        printf("\n(S) - Siguiente: ");
    }
}    
    
pNodo navegacion(pNodo ptrNodo)
{
    int fin=0;  
    pNodo pDevolver;
    
    do
    {
        fflush(stdin);
        
        switch(toupper(getchar()))
        {
            case 'S':   //S de siguiente elemento
            {
                if(ptrNodo->pSig)   //Se comprueba si hay siguiente elemento en la lista
                {
                    pDevolver=ptrNodo->pSig;
                    fin=1;  //Fin del bucle
                }
                break;
            }
            
            case 'A':   //A de anterior
            {
                if(ptrNodo->pAnt)    //Se comprueba si hay elemento anterior
                {
                    pDevolver=ptrNodo->pAnt;
                    fin=1;      //Fin del bucle
                }
                break;
            }
            
            case '0':       //Salir de la navegación
            {
                pDevolver=NULL;
                fin=1;       //Fin del bucle
            }
        }
    }
    while(!fin);
    
    return pDevolver;       //Devuelve el elemento a visualizar
}

void mensajeTotal(float total)
{
    printf("\n EL IMPORTE TOTAL ASCIENDE A: %.2F",total);
    
    printf("\n Pulse cualquier tecla para continuar....");
    
    getchar();
}               

float calcular_importe(pNodo pInicio)
{
    float total=0;      //Variable para almacenar el acumulado de los precios
    
    if (pInicio)        //Si hay elementos en la lista, es decir, la lista no está vacía
    {
        do              //Bucle para recorrer la lista
        {
            total=total+(pInicio->p.precio)*(pInicio->p.cantidad);
            pInicio=pInicio->pSig;
        }
        while(pInicio); //Mientras el puntero no tenga valor NULL
    }
    return total;
}


void mostrar_elemento(pNodo nodo)
{
    printf("\nNombre Producto: %s", nodo->p.nombre);
    printf("\nPrecio: %.2f",nodo->p.precio);
    printf("\nCantidad: %d",nodo->p.cantidad);    
}


void mensajeListaVacia(void)
{
    printf("LA LISTA NO CONTIENE ELEMENTOS....");
}