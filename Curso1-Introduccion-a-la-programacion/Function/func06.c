#include <stdio.h>

int i;
int var;

void func(){
	i=42;
}

void ofunc(){
	extern var;
	var++;
	printf("OFUNC() -> %d\n", var);
}


int main(){

	i = 12;
	printf("%d\n", i);
	func();
	printf("%d\n", i);

	extern var;
	var=9;

	printf("%d\n", var);
	ofunc();
	printf("%d\n", var);

	return 0;
}
