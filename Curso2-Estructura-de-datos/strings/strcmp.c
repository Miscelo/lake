#include <stdio.h>
#include <string.h>



int main(){




	char cadOrigen[256]="aaaaa";
	char cadDestino[256]="aaaab";
	char *mensaje;
	int resultado;


	resultado = strcmp(cadDestino,cadOrigen);

	switch(resultado){
		case 0:{
				mensaje = "Son iguales\n";
				break;
		}
		default:{
			if(resultado > 0){
				mensaje="cadena Destino es mayor\n";
			}else{
				mensaje="cadena Destiono es menor\n";
			}
			break;
		}
	}

	
	printf("%s\n", mensaje);

	return 0;
}
	
