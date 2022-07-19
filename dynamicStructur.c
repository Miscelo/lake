/* lineare_liste_1.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

struct Date{
    int day;
    int month;
    int year;
};

struct Employee{
    char surname[MAX];
    char name[MAX];
    struct Date birthday;
    struct Date dateOfHire;
    long salary;
    struct Employee *next;   //allocate to next element in structur
};

struct Employee *next = NULL;
struct Employee *origin = NULL;

/*Function will create first dataelements or append a new one*/
void newdata(char *sn, char *n, int bdd, int bmm, int byy, int doHdd, int doHmm, int doHyy, long dollar);
/*Function to input data from Terminal.*/
void input(void);


int main(){
    while(1){
        input();
    }
    return EXIT_SUCCESS;
}


void newdata(char *sn, char *n, int bdd, int bmm, int byy, int doHdd, int doHmm, int doHyy, long dollar){
    /*Create pointer to access to the elements*/
    struct Employee *ptr;

    /*Check if first element exists, if first element is allocated to NULL, then it will be start of list*/
    if(origin == NULL){
        /*reserve space  in RAM for this structur for the first element.*/
        if((origin = 
        malloc(sizeof(struct Employee))) == NULL){
            fprintf(stderr, "No space available for element!\n");
            return;
        }
        /*Create start of linear list*/
        strcpy(origin->surname, sn);
        strcpy(origin->name, n);
        origin->birthday.day = bdd;
        origin->birthday.month = bmm;
        origin->birthday.year = byy;
        origin->dateOfHire.day = doHdd;
        origin->dateOfHire.month = doHmm;
        origin->dateOfHire.year = doHyy;
        origin->salary = dollar;
        /*pointer start indicate the previous element. In this case, if its first element of list, start -> NULL*/
        origin->next=NULL;
    }   
    else{
        ptr=origin; /*It will indicate the first element*/
        while (ptr->next != NULL){
            ptr = ptr->next;
        }
        /*Reserve space for last element of the list and schedule it*/
        if((ptr->next = malloc(sizeof(struct Employee))) == NULL){
            fprintf(stderr, "No space available for last element!\n");
            return;
        }
        ptr=ptr->next; /*Pointer to new space*/
        strcpy(ptr->surname, sn);
        strcpy(ptr->name, n);
        ptr->birthday.day = bdd;
        ptr->birthday.month = bmm;
        ptr->birthday.year = byy;
        ptr->dateOfHire.day = doHdd;
        ptr->dateOfHire.month = doHmm;
        ptr->dateOfHire.year = doHyy;
        ptr->salary = dollar;
        ptr->next = NULL;
    }
}


void input(void){
    char sname[MAX];
    char name[MAX];
    int bdd, bmm, byy;
    int doHdd, doHmm, doHyy;
    long salary;
    printf("Please insert Last Name: ");
    fgets(sname, MAX, stdin);
    printf("Please insert name: ");
    fgets(name, MAX, stdin);
    printf("Age: (dd.mm.yyyy)");
    scanf("%2d.%2d.%4d", &bdd, &bmm, &byy);
    printf("Date of Hire: (dd.mm.yyyy)");
    scanf("%2d.%2d.%4d", &doHdd, &doHmm, &doHyy);
    printf("Salary (month): ");
    scanf("%ld", &salary);
    getchar();
    /*Append Input-Data to the list*/
    newdata(sname, name, bdd, bmm, byy, doHdd, doHmm, doHyy, salary);
}