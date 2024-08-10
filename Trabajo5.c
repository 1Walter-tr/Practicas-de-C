/*Diseñe un algoritmo para calcular y mostrar el porcentaje de partidos de fútbol ganados por un club en un 
campeonato, conociendo los datos: cantidad de partidos jugados y cantidad de partidos ganados por el 
club.*/

#include <stdio.h>

int partidosJugados;
int partidosGanados;
float porcentajeGanados;

void ingresoDatos(){
  printf("Ingrese la cantidad de partidos jugados: ");
  scanf("%d",&partidosJugados);
  printf("Ingrese la cantidad de partidos ganados: ");
  scanf("%d",&partidosGanados);
}

void salidaDatos(){
  porcentajeGanados = ((float)partidosGanados/partidosJugados) * 100;

  printf("Partidos jugados: %d\n",partidosJugados);
  printf("Partidos ganados: %d\n",partidosGanados);
  printf("Porcentaje de partidos ganados: %.2f",porcentajeGanados);
}

int main(){
  ingresoDatos();
  salidaDatos();

  return 0;
}