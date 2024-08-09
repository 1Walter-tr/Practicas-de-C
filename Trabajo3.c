/*Escribir un programa que contenga las siguientes funciones:
a) Una función que devuelva la mitad de un número
mitadDe( 10 ) → 5
b) Una función que devuelva el doble de un número
dobleDe( 5 ) → 10 
c) Una función que devuelva el triple de un número
tripleDe( 5 ) → 15
d) Una función que devuelva el anterior de un número que recibe
anteriorDe( 10 ) → 9
e) Una función que devuelva el posterior de un número que recibe
posteriorDe( 10 ) → 11
f) Una función que devuelva el posterior del doble de un número. ¡Podemos utilizar 
funciones que ya hicimos! Pista: Multiplicar un número por 2 y sumar 1.
posteriorDelDobleDe( 50 ) → 101 
g) Una función que solicite al usuario ingresar un valor entero, y permita probar todas las 
funciones anteriores teniendo en cuenta el valor ingresado*/

#include <stdio.h>

int numeroIngreso;

void ingresoDatos(){
  printf("Ingrese un numero: ");
  scanf("%d",&numeroIngreso);
}

void salidaDatos(){
  printf("La mitad del numero ingresado es %d\n",numeroIngreso/2);
  printf("El doble del numero es %d\n",numeroIngreso*2);
  printf("El triple del numero es %d\n",numeroIngreso*3);
  printf("El anterior del numero es %d\n",numeroIngreso-1);
  printf("El posterior del numero es %d\n",numeroIngreso+1);
  printf("El posterior del doble del numero es %d\n",numeroIngreso*2+1);
}

int main(){
  ingresoDatos();
  salidaDatos();

  return 0;
}