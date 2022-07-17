/* una union es una estructura, con la excepción de que cuando utilizan
 * la memoria, no realizan una ocupación total en función de la misma,
 * sino que sólo ocupan el del mayor de sus campos.
 */
/* Una estructura si no vas a usar todos los datos,
 * capacidad maxima es el mayor de sus campos. No estan contiguas en la RAM
 */


// El seguiente script no funciona. !!! Sobreescribe los valores
 #include <stdio.h>
 #include <string.h>

 union Pedido{
   char producto[20];
   int cantidad;
   float precio;
   float subtotal;
 } pedido;


 void ver_pedido_union(union Pedido var);

 int main(){

   union Pedido Pedido1;
   strcpy(Pedido1.producto, "Boligrafo");
   Pedido1.cantidad = 5;
   Pedido1.precio = 3.5;
   Pedido1.subtotal = Pedido1.cantidad * Pedido1.precio;

   printf("Tamaño de la estructura = %d\n", sizeof(Pedido1));
   ver_pedido_union(Pedido1);

   return 0;
 }


 void ver_pedido_union(union Pedido Pedido){
   printf("Producto = %s\n", Pedido.producto);
   printf("Cantidad = %d\n", Pedido.cantidad);
   printf("Precio = %.2f\n", Pedido.precio);
   printf("Subtotal = %.2f\n", Pedido.subtotal);
 }
