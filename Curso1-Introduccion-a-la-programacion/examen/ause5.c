#include <stdio.h>
#include <stdlib.h>
#include <string.h>



const char* myName() {
  char secretWord[8];
	char cat_Ciudades[10][8] = {"London", "Paris", "Madrid", "Berlin", "Cairo", "Estambul", "Dehli", "Havana", "Toronto", "Atenas"};
	strcpy(secretWord, cat_Ciudades[3]);

  printf("Func: %s\n", secretWord);

  char *var = "Michi";
	return var;

}




int main(void) {
  printf("%s", myName());

  return 0;
}
