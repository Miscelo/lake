#include <stdio.h>
#include <string.h>


int main(){
	char password[]="abcd";
	char eingabe[99];

	
	
	fgets(eingabe,99,stdin);

	int l;
	l= strlen(eingabe);
	printf("%d\n", l);	
		
	int diff;
	diff = strncmp(password, eingabe, l-1);
	printf("%d\n", diff); 


	return 0;
}
