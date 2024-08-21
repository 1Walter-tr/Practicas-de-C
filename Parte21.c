/*. Escribir un programa que permita ingresar por teclado una frase y detecte y cuente las letras en 
mayúsculas. Recuerde que en ASCII las mayúsculas toman valores decimales comprendidos entre 65 y 
90.*/

/*isupper se encarga de encontrar un caracter en mayusculas en biblioteca ctype.h*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char frase[50];
int contador = 0;

void ingresoDatos(){
  printf("Ingrese la frase: ");
  scanf("%[^\n]",frase);
}

void salidaDatos(){
  for(int i = 0; frase[i] !='\0'; i++){
    if(isupper(frase[i])){
      contador++;
    }
  }
  printf("La frase contiene %d letras mayusculas\n",contador);
}


int main(){
  ingresoDatos();
  salidaDatos();

  return 0;
}