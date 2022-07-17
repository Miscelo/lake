

  /****************************************************/
  /* Programm counts 10 seconds down to 0 and explote */
  /****************************************************/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>



/* delay function implents timesteps  - delay function not define in OS */
void delay(long int Millis);




int main(){
	for(int i=10;i>=0;i--){
		/* when i bigger than zero, print just i , but if not, print boooom. */
		(i>0)? printf("%d\n", i):printf("BOOOMMM!!!\n");
		delay(1000);
	}
	return 0;
}





void delay(long int Millis){
	long int Now=clock();
	Millis*=1000;
	while((clock()-Now)<Millis){}
}
