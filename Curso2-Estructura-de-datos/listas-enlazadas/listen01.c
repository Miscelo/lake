// TAD - Tipo astracto de Datos

#include <stdio.h>
#include <string.h>


struct EMPLOYE{
    int id;
    char nickname[12];
    char email[42];
}EMPLOYE;


void printEmploye(struct EMPLOYE Emp1){
    printf("ID: %d\nName: %s\nEmail: %s\n-------------\n", Emp1.id, Emp1.nickname, Emp1.email);
}

int main(){
    struct EMPLOYE Emp1;
    Emp1.id = 1;
    strcpy(Emp1.nickname, "mic");
    strcpy(Emp1.email, "mic.s@info.net");

    printEmploye(Emp1);

    return 0;
}

