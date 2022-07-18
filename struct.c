#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    char lastname[20];
    long POSTCODE;
    char city[30];
    char birthday[11];
}Address;


typedef enum {false, true} bool;


int main(){
    Address addr;
    strcpy(addr.name, "Michael");
    strcpy(addr.lastname, "Schossow");
    addr.POSTCODE = 11140;
    strcpy(addr.city, "Conil de la Frontera");
    strcpy(addr.birthday, "05.05.1977");

    bool truth;
    int res;
    printf("Caluclate 38 + 4 = ");
    scanf("%d", &res);
    if(res==38+4){
        truth = true;
    } 
    else
    {
        truth= false;
    }
    if(truth==false){
        printf("FALSE!\n");
    }
    else{
        printf("Richtig\n");
    }

    printf("%s\n", addr.name);
    printf("%s\n", addr.lastname);
    printf("%ld\n", addr.POSTCODE);
    printf("%s\n", addr.city);
    printf("%s\n", addr.birthday);
    return 0;
}