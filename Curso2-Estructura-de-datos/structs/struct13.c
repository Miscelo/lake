#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Rechteck_{
    int hoehe;
    int breite;
    char farbe[25];
} Rechteck;


void print(Rechteck r){
    printf("Breite:%d, Höhe:%d, Fläche:%d, Farbe: %s\n", r.hoehe, r.breite, r.hoehe * r.breite, r.farbe);
}


void changeColor(Rechteck *r){
    strcpy(r->farbe, "schwarz");
    verdoppleBreite(&r);
}

void verdoppleBreite(Rechteck **r){
    (*r)->breite = (*r)->breite *2;
    verdoppleHoehe(&r);
}

void verdoppleHoehe(Rechteck ***r){
    (**r)->hoehe = (**r)->hoehe * 2;
}


int main(){
    Rechteck r1 = {5, 10, "rot"};
    Rechteck r2;
    r2.hoehe = 3;
    r2.breite = 2;
    strcpy(r2.farbe, "gelb");
    print(r1);
    print(r2);
    changeColor(&r1);
    print(r1);


    return 0;
}