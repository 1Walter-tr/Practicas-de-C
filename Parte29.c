/* La empresa JetSmart posee datos de la cantidad de pasajeros de sus vuelos realizados diariamente en el 
mes de enero 2024 en su recorrido Corrientes-CABA. El gerente de la empresa desea saber el promedio 
de pasajeros que volaron en este mes y la mayor cantidad de pasajeros en un vuelo y a que día 
corresponde.  
*Nota: - 
Utilizar un vector para almacenar cantidad de pasajeros, y luego procesarlas.*/

#include <stdio.h>
#define DIAS 4

int pasajeros[DIAS];
int pasajerosMax;
int dias;

void ingresoDatos(){
    for(int i = 0; i < DIAS; i++){
        printf("Ingrese la cantidad de pasajeros del dia %d: ",i+1);
        scanf("%d",&pasajeros[i]);
    }
}

void salidaDatos(){
    for(int i = 0; i < DIAS; i++){
        if(pasajeros[i] > pasajerosMax){
            pasajerosMax = pasajeros[i];
            dias = i+1;
        }
    }
    printf("La cantidad maxima de pasajeros en un dia es de %d\n",pasajerosMax);
    printf("La maxima cantidad de pasajeros corresponde al dia %d\n",dias);
}

int main(){
    ingresoDatos();
    salidaDatos();

    return 0;
}