#include <stdio.h>

/* _name_ -> Non typedef name */
typedef struct _Coordinates_{
    int x;
    int y;
} Coordinates;


void print(Coordinates input){
    printf("(%d/%d)\n", input.x, input.y);
}


void del(Coordinates *input){
    input->x = 0;
    input->y = 0;
}

int main(){
    Coordinates point1 = {5,8};   /*instanz der Struktur*/
    print(point1);
    del(&point1);
    print(point1);





    return 0;
}