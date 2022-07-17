#include <stdio.h>

void calc(int *n){
    *n = 2 + *n;
}

int main(){
    int n;
    scanf("%d", &n);
    calc(&n);
    printf("%d", n);
    return 0;
}