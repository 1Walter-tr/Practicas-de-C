/*Escribir un programa que permita ingresar por teclado una frase (la frase termina con un punto) y cuente 
e informe la cantidad de veces que aparece una vocal en la cadena (por ejemplo, cuántas veces aparece 
la vocal “a”). La vocal se ingresa por teclado. Resuelva el ejercicio utilizando al menos una función.*/

#include <stdio.h>
#include <string.h>

char frase[200];
char ingresoVocales;

int conteo(char ingresoVocales){
  int conteoVocales = 0;
  for(int i = 0; frase[i] !='\0';i++){
    if(frase[i] == ingresoVocales){
      conteoVocales++;
    }
  }
  return conteoVocales;
}

void ingresoDatos(){
  printf("Ingrese una frase (termina con un punto): ");
  scanf("%[^\n]",frase);

  printf("Ingrese una vocal para el conteo: ");
  scanf(" %c",&ingresoVocales);
}

int main(){
  ingresoDatos();
  printf("La vocal %c aparece %d veces en la frase\n",ingresoVocales,conteo(ingresoVocales));

  return 0;
}