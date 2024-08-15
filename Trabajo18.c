/*El formato de presentación de un artículo científico exige que el título no exceda la cantidad de 20 palabras y esté escrito en mayúsculas. Escribir un programa que ingrese por teclado el título del trabajo (el título termina con un punto). Escriba una función que reciba como parámetro el título y retorne la cantidad de palabras que contiene. Además
utilice otra función que convierta el título a mayúsculas. Al final muestre en pantalla el título en mayúscula e indique con una leyenda si excede las 20 palabras.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char frase[50];
int longitud;

void ingresoDatos(){
  printf("Ingrese el titulo del trabajo (termina con un punto): ");
  scanf("%[^\n]s",frase);
}

void convertirMayusculas(){
  for(int i = 0; frase[i] !='\0'; i++){
    frase[i] = toupper(frase[i]);
  }
  longitud = strlen(frase);
  printf("%s\n",frase);
  printf("el titulo del trabajo tiene %d caracteres\n",longitud);
}

int main(){
  ingresoDatos();
  convertirMayusculas();

  return 0;
}