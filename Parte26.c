/*Finalizado el primer parcial de AED1 se cuenta con las notas obtenidas por los 1.000 estudiantes que 
cursan la asignatura, y el equipo docente necesita conocer acerca de su desempeño. El parcial se aprueba 
con nota mayor o igual a 6. Se desea obtener el promedio de notas de los estudiantes que aprobaron y 
el porcentaje que representan sobre el total. 
*Nota:
- Utilizar un vector para almacenar las notas, y luego procesarlas.
- Utilizar una función para calcular el promedio de los que aprobaron. */

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

void ingreoDatos(){
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

  float promedio = promedioAprobados();
  porcentajeAprobados = ((float)cantAprobados / MAX) * 100;

  printf("El promedio de alumnos aprobados es de %.2f\n",porcentajeAprobados);
  printf("El promedio de las notas de los alumnos aprobados es de %.2f\n",promedio);
}

int main(){
  ingreoDatos();
  salidaDatos();

  return 0;
}