#include <stdio.h>
#include <string.h>


typedef struct Point{
	int x;
	int y;
} point;




int main(){
	Point P1;    //declared without struct, because of typedef
	P1.x = 0;
	P1.y = 0;


	P1.x=+1;
	printf("[%d,%d]\n", P1.x,P1.y);


		
	return 0;
}

