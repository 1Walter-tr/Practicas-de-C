/*Diseñe un algoritmo que emita el ticket con el importe a pagar 
en un supermercado considerando los datos: cantidad y precio 
del producto.*/

#include <stdio.h>

int cantUnidades;
float precioUnitario;
float total;

void ingresoDatos(){
  printf("Ingrese la cantidad de productos: ");
  scanf("%d",&cantUnidades);
  printf("Ingrese el precio unitario de cada producto: ");
  scanf("%f",&precioUnitario);
}

void salidaDatos(){
  total = cantUnidades * precioUnitario;

  printf("Cant. Unidades: %d ",cantUnidades);
  printf("Precio Unit: %.2f\n",precioUnitario);
  printf("Total: %.2f\n",total);
  printf("Gracias por su compra\n");
}

int main(){
  ingresoDatos();
  salidaDatos();

  return 0;
}