#include <stdio.h>
#include <string.h>


struct Empleado {
  char nombre[22];
  char apellido[42];
  float salario;
  int categoria;
} empleado;


void printEmpleado(struct Empleado *Emp);


int main(){

  struct Empleado Emp1;
  strcpy(Emp1.nombre,"Noel");
  strcpy(Emp1.apellido,"Mamoghli Diaz");
  Emp1.salario = 1500.99;
  Emp1.categoria = 50;

  printEmpleado(&Emp1);

  printf("-----------------------\n");
  printf("%p\n", &Emp1.nombre);
  printf("%p\n", &Emp1.apellido);
  printf("%p\n", &Emp1.salario);
  printf("%p\n", &Emp1.categoria);

  return 0;
}


void printEmpleado(struct Empleado *Emp){
  printf("%s,%s,%.2lf,%d\n", Emp->apellido, Emp->nombre, Emp->salario, Emp->categoria);
  printf("%p\n", &Emp->nombre);
  printf("%p\n", &Emp->apellido);
  printf("%p\n", &Emp->salario);
  printf("%p\n", &Emp->categoria);

}
