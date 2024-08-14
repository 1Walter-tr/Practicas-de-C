/*. Escribir un programa que disponga de la declaración de un tipo de dato tCaracter que permita 
renombrar al tipo de dato char. Declarar una variable del tipo tCaracter, asignarle un valor e imprimir 
por pantalla su contenido.
*/

#include <stdio.h>

typedef char tCaracter;

void general(){
  tCaracter cMuestra = 'A';
  printf("El mensaje a mostrar es: %c\n",cMuestra);
}

int main(){
  general();

  return 0;
}