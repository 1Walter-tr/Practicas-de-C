#include <stdio.h>
#define MAX 4

float notas[MAX];
int cantAprobados = 0;
float porcentajeAprobados;

float promedioAprobados(){
  float suma = 0.0;
  for(int i = 0; i < MAX; i++){
    if(notas[i] >= 6){
      cantAprobados++;
      suma = suma + notas[i];
    }
  }

  if(cantAprobados > 0){
    return suma / cantAprobados;
  }
  else{
    return 0.0;
  }
}

float calcularPromedioGeneral(){
  float suma = 0.0;
  for(int i = 0; i < MAX; i++){
    suma = suma + notas[i];
  }
  return suma / MAX;
}

void ingresoDatos(){
  for(int i = 0; i < MAX; i++){
    printf("Ingrese la nota del alumno %d: ",i+1);
    scanf("%f",&notas[i]);
  }
}

void salidaDatos(){
  for(int i = 0; i < MAX; i++){
    if(notas[i] >= 6){
      printf("Alumno %d, Nota: %.2f: Aprobado\n",i+1,notas[i]);
    }
    else{
      printf("Alumno %d, Nota: %.2f: Desaprobado\n",i+1,notas[i]);
    }
  }

  float promedioAprobadosNotas = promedioAprobados();
  porcentajeAprobados = ((float)cantAprobados / MAX) * 100;

  printf("El porcentaje de alumnos aprobados es de %.2f\n",porcentajeAprobados);
  printf("El promedio de las notas de los alumnos aprobados es de %.2f",promedioAprobadosNotas);
}

void mostrarNotasMayoresAlPromedio(float promedio){
  printf("Notas maayores al promedio general (%.2f):\n",promedio);
  for(int i = 0; i < MAX; i++){
    if(notas[i] > promedio){
      printf("Alumno %d, Nota: %.2f (Posicion: %d)\n",i+1,notas[i],i);
    }
  }
}

int main(){
  ingresoDatos();
  salidaDatos();

  float promedioGeneral = calcularPromedioGeneral();
  mostrarNotasMayoresAlPromedio(promedioGeneral);

  return 0;
}