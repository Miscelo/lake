#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 20

char eingabe(){
    printf("\nNummer eingeben: ");
    char c;
    c = getchar();
    getchar();
    return c;
}

int main(){
    char name[MAX]; 

    switch(eingabe()){
        case '1': 
                    printf(" CASE 1\n");
                    fgets(name, 20, stdin);
                    //scanf("%s", &name);
                    printf("%s", name);
                    break;
        case '2':
                    printf(" CASE 2\n");
                    break;
    }
    return 0;
}