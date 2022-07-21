/* linear_list2.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 20


struct _Angestellt_{
   char name[MAX];
   long gehalt;
   struct _Angestellt_ *next;
} Angestellt;


struct _Angestellt_ *next   = NULL;
struct _Angestellt_ *anfang = NULL;


void anhaengen(char *n, long g) {
   /* Zeiger zum Zugriff auf die einzelnen Elemente der Struktur */
   struct _Angestellt_ *zeiger;
   if(anfang == NULL) {
      /* Wir reservieren Speicherplatz für unsere Struktur für das erste Element der Liste. */
      if((anfang = malloc(sizeof(struct _Angestellt_))) == NULL) {
         fprintf(stderr, "Kein Speicherplatz vorhanden "
                         "für anfang\n");
         return;
      }
      strcpy(anfang->name, n);
      anfang->gehalt = g;
      anfang->next=NULL;
   }
   /* Datensatz anhängen. Mindestens ein Element schon vorhanden*/
   else {
      zeiger=anfang; /* Wir zeigen auf das 1. Element. */
      while(zeiger->next != NULL)
         zeiger=zeiger->next;
      if((zeiger->next = malloc(sizeof(struct _Angestellt_))) == NULL) {
          fprintf(stderr,"Kein Speicherplatz für das "
                         "letzte Element\n");
          return;
      }
      zeiger=zeiger->next; /* zeiger auf neuen Speicherplatz */
      strcpy(zeiger->name,n);
      zeiger->gehalt=g;
      zeiger->next=NULL;
   }
}

void loesche(char *wen) {
   struct _Angestellt_ *zeiger, *zeiger1;
   /* Ist überhaupt ein Element vorhanden? */
   if(anfang != NULL) {
      /* Ist unser 1. Element das von uns gesuchte (wen[])? */
      if(strcmp(anfang->name,wen) == 0) {
         zeiger=anfang->next;
         free(anfang);
         anfang=zeiger;
      }
      else {
         zeiger=anfang;
         while(zeiger->next != NULL) {
            zeiger1=zeiger->next;
            if(strcmp(zeiger1->name,wen) == 0) {
               zeiger->next=zeiger1->next;
               free(zeiger1);
               break;
            }
            zeiger=zeiger1;
         } 
      }  
   }  
   else
      printf("Es sind keine Daten zum Loeschen vorhanden!!!\n");
}

void ausgabe(void) {
   struct _Angestellt_ *zeiger = anfang;
   while(zeiger != NULL) {
      printf("%12s, %06ld\n", zeiger->name, zeiger->gehalt);
         printf("|----------------------|\n");
         zeiger=zeiger->next;
   }
}


int main(void) {
   anhaengen("Michi", 42);
   anhaengen("Ana", 1337);
   anhaengen("Robert", 13.23);
   ausgabe();
   return EXIT_SUCCESS;
}