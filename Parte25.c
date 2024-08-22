/*Un supermercado dispone de la siguiente información relacionada con sus productos: código de producto, 
descripción, precio de costo y precio sugerido. Se solicita escribir un programa que permita ingresar los 
datos del producto (código de producto, descripción, precio de costo) y calcular el precio sugerido (aplicar 
el 30% del precio de costo). El programa debe incluir la declaración de una estructura compuesta que 
permita modelar los datos de los productos. El programa finaliza cuando el usuario ingresa -1 en el código 
del producto*/

#include <stdio.h>
#include <string.h>

struct supermercado
{
  int codigoProducto;
  char descripcionProducto[50];
  float precioProducto;
  float porcentajeDescuento;
  float descuento;
  float precioFinal;
};

void ingresoDatosSalida(){
  struct supermercado super1;

  printf("Ingrese el codigo del producto: ");
  scanf("%d",&super1.codigoProducto);
  printf("Ingrese la descripcion del producto: ");
  scanf("%s",super1.descripcionProducto);
  printf("Ingrese le precio del producto: ");
  scanf("%f",&super1.precioProducto);

  super1.porcentajeDescuento = 0.30;

  super1.descuento = super1.precioProducto * (super1.porcentajeDescuento / 100);
  super1.precioFinal = super1.precioProducto - super1.descuento;

  printf("Codigo del producto: %d\n",super1.codigoProducto);
  printf("Descripcion del producto: %s\n",super1.descripcionProducto);
  printf("Precio: %.2f\n",super1.precioProducto);
  printf("Precio final con descuento aplicado: %.2f\n",super1.precioFinal);

}

int main(){
  int opcionCerrar;
  do{
    ingresoDatosSalida();
    printf("Ingrese 1 si desea continar o -1 si desea cerrar: ");
    scanf("%d",&opcionCerrar);
  }
  while(opcionCerrar == 1);
  return 0;
}