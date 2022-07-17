#include <stdio.h>

/*   %=37, 42=*, 43=+, 45=-, 47=/   */



int main(){
	
	double x, y;

	printf("Bitte geben sie eine Zahl ein: ");
	scanf("%lf", &x);
	:printf("Geben Sie eine 2. Zahlñ ein: ");
	scanf("%lf", &y);
	fflush(stdin);

	char ch;
	ch = getchar();






	switch(ch){
		case '+': printf("%lf + %lf = %lf", x,y,x+y);
			  break;
		case '-': printf("%lf - %lf = %lf", x,y,x-y);
			  break;
		case '*': printf("%lf * %lf = %lf", x,y,x*y);
			  break;
		case '/': printf("%lf / %lf = %lf", x,y,x/y);
			  break;
		default:
			printf("Error eingabe!");
	}


	return 0;
}






