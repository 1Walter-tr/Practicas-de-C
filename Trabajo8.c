/*Con el objeto de conseguir fondos para el viaje de egresados, los alumnos de 6to. año organizaron un 
baile. El precio de las entradas es de $750 con una consumición, y de $500 sin consumición. Si la venta 
es anticipada, se realiza un descuento del 20% al valor de la entrada. Se requiere un programa para la 
emisión de la entrada. La entrada debe mostrar si la venta fue anticipada (‘S’ / ‘N’), el tipo de entrada 
(1-con consumición, 2-sin consumición) y el importe a pagar. 
*Nota: prestar atención al ingreso de datos de tipo char.
*/

#include <stdio.h>

int consumicion;
char anticipo;
float entradas;
float entradaConsumicion;
float descuento;

void ingresoDatos(){
  printf("Su entrada es con o sin consumicion (1-con consumicion, 2-sin consumicion): ");
  scanf("%d",&consumicion);
  printf("La entrada es anticipada (s-si, n-no): ");
  scanf(" %c",&anticipo);
}

void salidaDatos(){
  if(consumicion == 1){
    entradaConsumicion = 750; 
  }
  else{
    entradaConsumicion = 500;
  }

   if(anticipo == 's'){
    // Aplicar descuento del 20%
    descuento = entradaConsumicion * 0.20;
    entradaConsumicion = entradaConsumicion - descuento;
  }

  printf("La entrada fue con consumicion: %d\n",consumicion);
  printf("La entrada fue anticipada: %c\n",anticipo);
  printf("El precio de la entrada es de %.2f",entradaConsumicion);
}

int main(){
  ingresoDatos();
  salidaDatos();

  return 0;
}