#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int main(){

	char arr[] = "Michael";

  char * const aletra = &arr;



  printf("%s\n", aletra);

  aletra[4] = 'z';
  printf("%s\n", aletra);

	printf("%s\n", arr);


	return EXIT_SUCCESS;
}
