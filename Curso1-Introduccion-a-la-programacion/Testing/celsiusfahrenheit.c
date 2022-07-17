#include <stdio.h>

float fahrenheitToCelsius(int F);



int main(){
	float celsius;
	char fah[] = "ºF";
	char cel[] = "ºC";
	char line = '-';

	printf("Tabelle: ºFahrenheit -> ºCelsius steps 20ºF\n");
	printf("%11s |%10s\n",fah, cel);
	for(int i=0;i<26;i++){
		printf("%c",line);
	}
	printf("\n");

	for(int i=0;i<=300;i+=20){
		celsius = fahrenheitToCelsius(i);
		printf("%10d | %10.2f\n",i ,celsius);
	}
	

	return 0;
}



float fahrenheitToCelsius(int F){
	return ((float)F-32)/1.8000;
}
