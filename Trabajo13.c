/*Escribe un programa en C que pida al usuario que ingrese un número positivo. Si el usuario ingresa un número negativo o cero, el programa debe solicitar nuevamente un número hasta que se ingrese un número positivo. Una vez ingresado un número positivo, el programa debe imprimir el número ingresado y finalizar.*/

#include <stdio.h>

int numero;

void general(){
  do{
    printf("Ingrese un numero positivo: ");
    scanf("%d",&numero);

    if(numero <= 0){
      printf("Por favor ingrese lo solicitado.\n");
    }
  }
  while(numero <= 0);
}

int main(){
  general();

  return 0;
}