/*TIPOS DE DATOS DEFINIDOS POR EL USUARIO
En C es posible crear nuevos tipos de datos personalizados a través de la palabra reservada 
typedef.
El tipo personalizado que se declara en un typedef aparece luego del tipo de dato primitivo 
que toma como base. Por ejemplo, la declaración:
 typedef int tEntero;
hace del nombre tEntero un sinónimo del tipo de dato int.
Una vez creado este nuevo tipo de dato, puede ser utilizado para declarar variables de este 
tipo. Por ejemplo, la siguiente instrucción:
tEntero len, maxlen; 
declara las variables len y maxlen del tipo tEntero.
El tipo tEntero puede utilizarse en declaraciones, casts (conversión de tipos), etc., 
exactamente de la misma manera en que lo podría hacer int*/

/*Escribir un programa que disponga de la declaración de un tipo de dato tNumeroReal que permita 
renombrar al tipo de dato float. Declarar una variable del tipo tNumeroReal, asignarle un valor e 
imprimir por pantalla su contenido.*/

#include <stdio.h>

typedef float tNumeroReal;

void general(){
  tNumeroReal fNumero = 12.25;
  printf("El numero es: %.2f\n",fNumero);
}

int main(){
  general();

  return 0;
}