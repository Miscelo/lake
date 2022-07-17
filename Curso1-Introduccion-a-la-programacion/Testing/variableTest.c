#include <stdio.h>
#include <limits.h>
#include <stddef.h>


int main(){

  printf("Wieviel bit hat Char? - %d\n", CHAR_BIT);

  /* char transformers */
  char wtf = 97;
  printf("%c\n", wtf);

  char letra = 'A';
  printf("%c\n", letra);

  int c = wtf + letra;
  printf("%i\n", c);

  /* mehr zeichen als 127 asciis*/
  wchar_t ch = L'ñ';
  printf("%lc\n",ch);

  wchar_t ch2 = 0;
  while(ch2 != 'q'){
    printf("Bitte geben sie ein Zeichen ein: ");
    scanf("%lc\n", &ch2);
    printf("%lc\n", ch2);
  }


  return 0;
}
