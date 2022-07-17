/* Linux   int    4 Byte   –2147483648 +2147483647    */
#include <stdio.h>
#include <limits.h>

int main(){
  printf("integer Bytes: %d\n",sizeof(int));
  printf("Wertebereich von integer: [%d, %d]\n",INT_MIN, INT_MAX);

  /* char value de -128 hasta 127 */
  printf("%d\n", CHAR_MAX);

  //valor maximo de float,   das ' +' kann man weglassen
  int float_max = 3.4E+38;
  printf("Maximo de float: %d\n", float_max);

  //valor máximo de double
  double double_max = 1.7E308;
  printf("Maximo de double: %d\n", double_max);

  //valor maximo de long
  long double ldouble_max = 3.4E+4932L;
  printf("Maximo de long double: %d\n", ldouble_max);


  char letra = 'ñ';
  printf("%d\n", letra);

  //Important %c  and not %d
  int a = 97;
  char c = a;
  printf("%c\n", c);

  //Funktion printed ASCII TAbelle char - number
  printChar(127);

  return 0;
}



void printChar(int limes){
  for(int i=33; i<= limes; i++){
    int val = i;
    char chr = val;
    printf("%d <=> %c\n",i, chr);
  }
}
