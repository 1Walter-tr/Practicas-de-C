/*Generar y mostrar la tabla de multiplicar de un número introducido por el teclado.*/

#include <stdio.h>

int numero;

void general(){
  printf("Ingrese un numero para mostrar su tabla de multiplicar: ");
  scanf("%d",&numero);

  for(int i = 0; i <= 10; i++){
    printf("%d x %d = %d\n",numero,i,numero * i);
  }
}

int main(){
  general();

  return 0;
}