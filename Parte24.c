/*Crear una estructura compuesta para almacenar datos de super héroes: nombre de super héroe, nombre 
terrestre, poder, universo (editorial). Asignarle valores, y mostrar por pantalla.
*/

#include <stdio.h>
#include <string.h>

struct SuperHeroe
{
  char nombreS[50];
  char nombreT[50];
  char poder[50];
  char universo[50];
};

void mostrarDatos(struct SuperHeroe super1){
  printf("Nombre de Super Heroe: %s\n",super1.nombreS);
  printf("Nombre terrestre: %s\n",super1.nombreT);
  printf("Poder: %s\n",super1.poder);
  printf("Universo: %s",super1.universo);
}

  
void asignarDatos(){
  struct SuperHeroe super1;
  strcpy(super1.nombreS, "SuperMan");
  strcpy(super1.nombreT,"Clark Kent");
  strcpy(super1.poder, "Vision rayos x, imbencible");
  strcpy(super1.universo, "Universo DC");

  mostrarDatos(super1);
}

int main(){
  asignarDatos();

  return 0;
}