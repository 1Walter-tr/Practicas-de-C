/*Un local comercial quiere colocar una cinta con una leyenda impresa en una caja rectangular. 
Para determinar la cantidad de cinta a comprar necesita conocer el perímetro de la caja. 
Escriba una función que calcule y devuelva el valor del perímetro. El programa debe permitir 
el ingreso de los datos requeridos: el ancho (lado1) y alto (lado2) de la caja y debe mostrar en 
pantalla los datos de la caja y la cantidad de metros de cinta a comprar.
Nota: perímetro = 2 * (lado1 + lado2).*/

#include <stdio.h>

float lado1;
float lado2;
float perimetro;

void ingresoDatos(){
  printf("Ingrese el ancho de la caja: ");
  scanf("%f",&lado1);
  printf("Ingrese el alto de la caja: ");
  scanf("%f",&lado2);
}

void salidaDatos(){
  perimetro = 2 * (lado1 + lado2);
  printf("El ancho de la caja es de %.2f\n",lado1);
  printf("El alto de la caja es de %.2f\n",lado2);
  printf("La cantidad de metros de cinta a comprar es de %.2f\n",perimetro);
}

int main(){
  ingresoDatos();
  salidaDatos();

  return 0;
}