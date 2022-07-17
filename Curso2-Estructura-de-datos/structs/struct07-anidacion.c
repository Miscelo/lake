/* Anidación de estructuras
 * Al igual que una estructura puede tener un número indefinido de miembros o campos,
 * también puede tener un nivel de anidación indeterminado.
 * Es decir, una estructura puede contener a otra, esta a su vez puede contener otra y
 * así sucesivamente con n niveles de encadenamiento.
 */

#include <stdio.h>
#include <string.h>

struct Tienda{
  char nombreTienda[30];
  char ubicacion[20];
  char telefono [12];
} tienda;

struct Empleado{
  unsigned int id;
  char nombreEmpleado[50];
  char telefonoContacto[9];
} empleado;

struct Producto{
  char nombreProducto[30];
  unsigned int catnidad;
  float precio;
} producto;

struct Venta{
  struct Tienda t;
  struct Empleado e;
  struct Producto p;
} venta;



int main(){

  struct Venta V1;
  strcpy(V1.t.nombreTienda, "OleoConil");

  printf("%s\n", V1.t.nombreTienda);


  return 0;
}
