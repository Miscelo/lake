#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int L);

int main(){
  int *arr;
  size_t n = 5;
  arr = (int *)malloc(sizeof(int) * n);

  *arr = 42;
  *(arr+1) = 1337;
  *(arr+2) = 13;
  *(arr+3) = 5;
  *(arr+4) = 11;
  printArray(arr, n);

  free(arr);

  return 0;
}


void printArray(int *arr, int L){
  printf("Dynamisches Array := [");
  int i;
  for(i=0;i<L;i++){
    printf("%d", *(arr+i));
    (i<L-1)? printf(", "): printf("]\n");
  }
}
