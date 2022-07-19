#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Emp{
    int num;
    int pid;
    struct Emp *next;
};

struct Emp *next = NULL;
struct Emp * anfang = NULL;

int main(){
    struct Emp e;
    e.num = 6;
    e.pid = 7;

    struct Emp *emp;
    emp = &e;
    emp->num = 42;
    emp->pid = 1337;
    printf("%ld\n", sizeof(struct Emp));

    printf("%d\n", e.num);
    printf("%d\n", e.pid);
    if(anfang == NULL){
        if(anfang = (Emp *) malloc(8) == NULL){
            fprintf(stderr, "Kein platz.\n");
        }
    }


    return EXIT_SUCCESS;
}