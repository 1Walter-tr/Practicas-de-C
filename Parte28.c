/*Posteriormente, y continuando con el análisis del desempeño de los alumnos, los docentes desean 
conocer todas las notas mayores al promedio obtenido, y la posición que ocupa en el vector.  
Modifique el programa del ejercicio anterior, agregando un módulo para recorrer nuevamente el vector 
e informar lo requerido. */
#include <stdio.h>
#define MAX 4

float notas[MAX];
int cantAprobados = 0;
float porcentajeAprobados;

float promedioAprobados() {
    float suma = 0.0;
    for (int i = 0; i < MAX; i++) {
        if (notas[i] >= 6) {
            cantAprobados++;
            suma += notas[i];
        }
    }

    if (cantAprobados > 0) {
        return suma / cantAprobados;
    } else {
        return 0.0;
    }
}

float calcularPromedioGeneral() {
    float suma = 0.0;
    for (int i = 0; i < MAX; i++) {
        suma += notas[i];
    }
    return suma / MAX;
}

void ingresoDatos() {
    for (int i = 0; i < MAX; i++) {
        printf("Ingrese la nota del alumno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

void salidaDatos() {
    for (int i = 0; i < MAX; i++) {
        if (notas[i] >= 6) {
            printf("Alumno %d, Nota: %.2f: Aprobado\n", i + 1, notas[i]);
        } else {
            printf("Alumno %d, Nota: %.2f: Desaprobado\n", i + 1, notas[i]);
        }
    }

    float promedioAprobadosNotas = promedioAprobados(); // Calcula el promedio de los aprobados
    porcentajeAprobados = ((float)cantAprobados / MAX) * 100; // Luego calcula el porcentaje de aprobados

    printf("El porcentaje de alumnos aprobados es de %.2f%%\n", porcentajeAprobados);
    printf("El promedio de las notas de los alumnos aprobados es de %.2f\n", promedioAprobadosNotas);
}

void mostrarNotasMayoresAlPromedio(float promedio) {
    printf("\nNotas mayores al promedio general (%.2f):\n", promedio);
    for (int i = 0; i < MAX; i++) {
        if (notas[i] > promedio) {
            printf("Alumno %d, Nota: %.2f (Posición: %d)\n", i + 1, notas[i], i);
        }
    }
}

int main() {
    ingresoDatos();
    salidaDatos();

    float promedioGeneral = calcularPromedioGeneral(); // Calcular el promedio general de todas las notas
    mostrarNotasMayoresAlPromedio(promedioGeneral); // Mostrar las notas mayores al promedio general

    return 0;
}