/* Crear un programa llamado vendedores que cree un array de 18 X 10 indicando
 * que poseemos una empresa de 18 vendedores cada uno de los cuales vende 10
 * productos.
 * El array almacena los ingresos obtenidos por cada vendedor en cada producto, de
 * modo que un menú permite almacenar los ingresos, revisar el total de cada
 * vendedor y obtener los ingresos totales
*/



#include <stdio.h>
#include <stdlib.h>

#define N_VENDEDORES 18
#define N_PRODUCTOS 10


/* Función que muestra el menú del programa y retorna*/
int mostrarMenu();

/*Función que calcula el total de todas las ventas*/
double mostrarTotal(double v[][N_PRODUCTOS]);

/*Función que calcula el total de ventas de un vendedor*/
double totalVendedor(double v[][N_PRODUCTOS],int nVendedor);

int main(){
	//A[vendedores][productos] 
	double ventas[N_VENDEDORES][N_PRODUCTOS]={0};
	int n, nvend, nprod, cantidad;
	n = mostrarMenu();
	while(n!=4){
		switch(n){
			case 1: printf("Numero de vendedor: "); scanf("%d", &nvend);
				printf("Numero de producto: "); scanf("%d", &nprod);
				printf("Cantidad vendida: "); scanf("%d", &cantidad);
				ventas[nvend][nprod]=cantidad;
				break;
			case 2: printf("Numero vendedor: "); scanf("%d", &nvend);
				printf("Ventas total Vendedor %d = %.2lf\n", nvend, totalVendedor(ventas, nvend));
				break;
			case 3: printf("Total de ventas: %.2lf\n", mostrarTotal(ventas));
				break;
		}
		n = mostrarMenu();
	}
	printf("FIN del programa!\n");
	return 0;
}


int mostrarMenu(){
	printf("Elije tu numero:\n");
	printf("1) Añadir datos\n");
	printf("2) Mostrar total del vendedor\n");
	printf("3) Mostrar total de ventas\n");
	printf("4) Salir\n");
	int n;
	scanf("%d", &n);	
	return n;
}


double mostrarTotal(double v[][N_PRODUCTOS]){
	double resp=0;
	int i,j;
	for(i=0;i<N_VENDEDORES;i++){
		for(j=0;j<N_PRODUCTOS;j++){
			resp+=v[i][j];
		}
	}
	return resp;
}


double totalVendedor(double v[][N_PRODUCTOS], int nVendedor){
	double resp=0;
	int i;
	for(i=0;i<N_PRODUCTOS;i++){
		resp += v[nVendedor][i];
	}
	return resp;
}
