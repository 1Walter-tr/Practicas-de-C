/* El responsable de cada comisión de Algoritmos 1 maneja una planilla con los datos de los alumnos que 
participan en ella. Las comisiones están compuestas por la misma cantidad de alumnos. A fin de verificar 
que no haya alumnos repetidos en las distintas comisiones, se requiere comparar los nombres de los 
alumnos de la Comisión 1 con los de la Comisión 2. Al comparar, se desea ver en pantalla el nombre que 
figura en cada comisión en caso de que sean iguales, junto con la posición en cada serie de datos, y la 
leyenda “Son iguales”. También se desea conocer la cantidad de nombres repetidos. 
*Nota:
-Utilizar vectores para almacenar los nombres de cada comisión 
-Definir el/los módulos necesarios para la generación de la Comisión 1, y luego reutilizarlos para 
generar la Comisión 2 */

#include <stdio.h>
#include <string.h>
#define MAX 5
#define LONG 50

char comision1[MAX][LONG];
char comision2[MAX][LONG];
int coincidencias = 0;

void ingresoDatos(){
    printf("Ingrese los nombres de los alumnos de la comision 1\n");
    for(int i = 0; i < MAX; i++){
        printf("Ingrese el nombre del alumno %d: ",i+1);
        scanf("%s",comision1[i]);
    }

    printf("Ingrese el nombre de los alumnos de la comision 2\n");
    for(int i = 0; i < MAX; i++){
        printf("Ingrese el nombre del alumo %d: ",i+1);
        scanf("%s",comision2[i]);
    }
}

void salidaDatos(){
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            if(strcmp(comision1[i],comision2[j])==0){
                printf("El nombre %s se repite en ambas comisiones\n",comision1[i]);
                coincidencias++;
                break;
            }
        }
    }

    if(coincidencias <= 0){
        printf("No hay nombres que se repiten en ambas comisiones\n");
    }
}

int main(){
    ingresoDatos();
    salidaDatos();

    return 0;
}