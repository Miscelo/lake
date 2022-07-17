
#include <stdio.h>



int main(){
	  int v[10] = {2,4,6,8,10};
		int i=0,x=0;
		while(i<=5){
			x=x+v[i];
			i=i+1;
		}
		printf("%d",x);
	  return 0;
}
/*
	float func(float a, float b, float c){
	return a*b*c;

}
*/
