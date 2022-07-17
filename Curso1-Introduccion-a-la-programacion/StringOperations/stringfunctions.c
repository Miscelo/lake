#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char word[42];
  fgets(word, 42, stdin);
  printf("%s\n", word);


  /***StringCOPY -function   strcpy(Destino, origen)***/
  char destino[5];
  strcpy(destino, word);
  printf("\nKopierter String: %s", destino);


  /*** Stringlenght  - unsigned long integer  ***/
  int lgitud;
  lgitud = strlen(destino);
  printf("Der String hat die Länge: %ld\n\n", lgitud);


  /*** StringConcatenation, une dos strings ***/
  char w1[10] = "Hello ";
  char puffer[20];
  /* size_t ist undefinierter Datentyp, meisst uunsigned long */
  size_t len = 15 - strlen(w1)+1;  //PLatz fuer 0 Zeiche mit reservieren.
  printf("Name: ");
  fgets(puffer, 20, stdin);
  strncat(w1, puffer, len);
  printf("%s", w1);


  /*** String Comparison ***/
  char str1[] = "aacc";
  char str2[] = "aaca";
  int val;
  val = strncmp(str1, str2, 4);
  (val==0) ? printf("Die Strings sind gleich!\n"):printf("Strings sind ungleich!\n");
  // resultat -1 if str1 alfabetico menor que str2
  // resultat 0 if iguales
  // resultat 1 if str1 alfabetico mayor que str2


  /*** String Character - dursuchen eines STrings nach einem Zeichen ***/
  char palabra[30] = "Hallo Du clown";
  printf("%s\n", strchr(palabra, (int)'D'));



  getchar();
  return EXIT_SUCCESS;
}
