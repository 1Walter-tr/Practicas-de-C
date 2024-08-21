/*/*Declarar una estructura compuesta que permita modelar un registro de películas y series que serán 
utilizados por NETFLIX para llevar el control sobre el interés de los clientes (No más de 7 campos). Luego:
- Determinar el tipo y el tamaño de cada campo
- Calcular la longitud del registro
- Asignarle valores, y mostrar por pantalla.*/

#include <stdio.h>
#include <string.h>

struct Netflix
{
  char tipo[50];
  char genero[50];
  char titulo[50];
  int duracion;
};

void mostrarDatos(struct Netflix netflix1){
  printf("Tipo: %s\n",netflix1.tipo);
  printf("Genero: %s\n",netflix1.genero);
  printf("Titulo: %s\n",netflix1.titulo);
  printf("Duracion: %d\n",netflix1.duracion);
}

void general(){
  struct Netflix netflix1;

  netflix1.duracion = 160;

  strcpy(netflix1.tipo, "Pelicula");
  strcpy(netflix1.genero, "Accion");
  strcpy(netflix1.titulo, "Scarface");

  mostrarDatos(netflix1);
}

int main(){
  general();

  return 0;
}