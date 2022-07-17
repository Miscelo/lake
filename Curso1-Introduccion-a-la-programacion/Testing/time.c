#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main(){


	time_t rawtime;
	struct tm * timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	printf("Time: %s\n", asctime(timeinfo));
	

	time_t start,stop;
	double diff;
	printf("Einen moment bitte:\n");
	start=time(NULL);
	while((diff=difftime(stop=time(NULL),start)) != 5);
	printf("%.1f sek. vorbei!!\n", diff);





	return EXIT_SUCCESS;

}




