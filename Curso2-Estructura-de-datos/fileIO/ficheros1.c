#include <stdlib.h>
#include <stdio.h>

void printFile(char f[]);

int  main(){

    FILE* pfLector;
    char fichero[]="ejemplo.txt";
   
    if((pfLector=fopen(fichero, "rt"))==NULL){
       printf("\nNo se pudo abrir el fichero...");
       return EXIT_FAILURE;
    } else{
       printFile(fichero);
       fclose(pfLector);
       
    }

    return EXIT_SUCCESS;
 }


void printFile(char f[]){
  FILE* fread;
  fread=fopen(f, "r");
  if(fread==NULL){
    printf("ERROR!\n");
  } else{
     char c;
     while((c=fgetc(fread))!=EOF){
       printf("%c", c);
     }
  }
  fclose(fread);
}
