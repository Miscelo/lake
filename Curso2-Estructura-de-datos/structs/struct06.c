/*También es posible la asignación de un miembro de una estructura con el de otro
miembro del mismo tipo.*/

#include <stdio.h>
#include <string.h>

struct linea_pedido{
  char producto[20];
  int cantidad;
  float precio;
  float subtotal;
};

void pasada_por_valor(struct linea_pedido);
void pasada_por_referencia(struct linea_pedido *p);

int main(){

  struct linea_pedido linea1 = {"Boligrafo", 5, 3.5};

  linea1.subtotal = linea1.cantidad * linea1.precio;
  printf("Tamaño de la estructura = %d\n", sizeof(linea1));   //32
  printf("Tamaño de la referencia de la estructura = %d\n", sizeof(&linea1));  //8

  pasada_por_valor(linea1);
  pasada_por_referencia(&linea1);

  return 0;
}

//Uso de operador '.'
void pasada_por_valor(struct linea_pedido p){
  printf("Producto = %s\n", p.producto);
  printf("Cantidad = %d\n", p.cantidad);
  printf("Precio = %.2f\n", p.precio);
  printf("Subtotal = %.2f\n", p.subtotal);
}

void pasada_por_referencia(struct linea_pedido *p){
  printf("Producto = %s\n", p->producto);
  printf("Cantidad = %d\n", p->cantidad);
  printf("Precio = %.2f\n", p->precio);
  printf("Subtotal = %.2f\n", p->subtotal);
}
