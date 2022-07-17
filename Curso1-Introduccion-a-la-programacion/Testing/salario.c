#include<stdio.h>
//#include<conio.h>

void calcularSueldo(float costoHora, int cantidadHoras);

int main()
{
    float costoHora;
    int cantidadHoras;
    char opcion;
    do {
        printf("Ingrese cuanto se le paga por hora:");
        scanf("%f",&costoHora);
        printf("Cuantas horas trabajo:");
        scanf("%i",&cantidadHoras);
        calcularSueldo(costoHora, cantidadHoras);
        printf("Desea calcular los datos de otro empleado[s/n]:");
        scanf(" %c",&opcion);
    } while (opcion=='s');
	getchar();
    return 0;
}

void calcularSueldo(float costoHora, int cantidadHoras)
{
    float sueldo=costoHora * cantidadHoras;
    printf("El sueldo total a pagar es %0.2f\n",sueldo);
}
