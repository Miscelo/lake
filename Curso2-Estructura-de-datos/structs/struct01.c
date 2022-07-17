#include <stdio.h>
#include <string.h>


//Estructura, definición declarativa
struct Empleado {
  //Campos de la estructura - miembros - ingl. members
  char nombre[22];
  char apellido[42];
  float salario;
  int categoria;
} empleado;


void printEmpleado(struct Empleado *Emp);


int main(){
  /*Creación de una estructura informada,
  -> es una INSTANCIA concreta de una estructura*/
  struct Empleado Emp1;
  strcpy(Emp1.nombre,"Noel");
  strcpy(Emp1.apellido,"Mamoghli Diaz");
  Emp1.salario = 1500.99;
  Emp1.categoria = 50;

  printEmpleado(&Emp1);



  return 0;
}


void printEmpleado(struct Empleado *Emp){
  printf("%s,%s,%.2lf,%d", Emp->apellido, Emp->nombre, Emp->salario, Emp->categoria);


}
