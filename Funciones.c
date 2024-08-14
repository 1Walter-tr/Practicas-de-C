/*Uso de funciones, repasar antes de llegar al trabajo siguiente*/

#include <stdio.h>

int sumar(int a, int b){
  return a + b;
}

void mostrarResultado(int a, int b){
  int resultado = sumar(a,b);
  printf("EL resultado de la suma de %d y %d es de %d\n",a,b,resultado);
}

int main(){
  int numero1, numero2;

  printf("Ingrese el primer numero a sumar: ");
  scanf("%d",&numero1);

  printf("Ingrese el segundo numero: ");
  scanf("%d",&numero2);

  /*Llamar a la funcion mostrarResultado ya que ahi tiene almacenada int sumar*/
  mostrarResultado(numero1,numero2);

  return 0;
}