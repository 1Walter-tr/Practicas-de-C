/*Uso de tolower*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char frase[50];

void ingresoDatos(){
  printf("Ingrese la frase en mayusculas a mostrar en minusculas: ");
  scanf("%[^\n]s",frase);
}

void convertirMinusculas(){
  for(int i = 0; frase[i] !='\0';i++){
    frase[i] = tolower(frase[i]);
  }
  printf("%s",frase);
}

int main(){
  ingresoDatos();
  convertirMinusculas();

  return 0;
}