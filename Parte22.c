/* Escribir un programa que determine si una cadena es un palíndromo, es decir, si se puede leer de 
izquierda a derecha y viceversa. Por ejemplo: “ANILINA”, “RADAR”.*/

#include <stdio.h>
#include <string.h>

int palindromo(char palabra[]){
  int inicio = 0;
  int fin = strlen(palabra) - 1;

  while(inicio < fin){
    if(palabra[inicio] != palabra[fin]){
      return 0;
    }
    inicio++;
    fin--;
  }
  return 1;
}

int main(){
  char palabra[100];

  printf("Ingrese una palabra: ");
  scanf("%s",palabra);
  if(palindromo(palabra)){
    printf("La palabra %s es palindromo\n",palabra);
  }
  else{
    printf("La palabra %s no es palindroma\n",palabra);
  }

  return 0;
}