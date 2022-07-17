/*También es posible la asignación de un miembro de una estructura con el de otro
miembro del mismo tipo.*/

#include <stdio.h>
#include <string.h>

struct Libro{
  char titulo[80];
  char autor[50];
  unsigned int year;
  char editorial[30];
} libro;



int main(){

  struct Libro Biblioteca [1000];

  struct Libro libro1;
  strcpy(libro1.titulo, "C von A bis Z");
  strcpy(libro1.autor, "Juergen Wolf");
  libro1.year = 2019;
  strcpy(libro1.editorial, "Rheinwerk Verlag");

  Biblioteca[0] = libro1;


  printf("%c", Biblioteca[0]);



  return 0;
}
