/*Un supermercado cuenta con el importe total facturado en cada mes del año 2023 en sus 6 sucursales. Desea conocer el mayor monto de venta y a qué sucursal corresponde. 
*Nota:
-Utilizar una matriz para almacenar los totales facturados para luego obtener lo requerido.*/

#include <stdio.h>
#define SUCURSALES 6
#define MESES 4

float sucursales[SUCURSALES][MESES];
int mesMaximo = 0;
int sucursalMaximo = 0;

void ingresoDatos();
void salidaDatos();

int main(){
  ingresoDatos();
  salidaDatos();

  return 0;
}

void ingresoDatos(){
  for(int i = 0; i < SUCURSALES; i++){
    printf("Ingrese las ganancias de la sucursal %d\n",i+1);
    for(int j = 0; j < MESES; j++){
      printf("Ingrese las ganancias del mes %d: ",j+1);
      scanf("%f",&sucursales[i][j]);
    }
  }
}

void salidaDatos(){
  float gananciasMaximo = 0.0;
  for(int i = 0; i < SUCURSALES; i++){
    for(int j = 0; j < MESES; j++){
      if(sucursales[i][j] > gananciasMaximo){
        gananciasMaximo = sucursales[i][j];
        mesMaximo = j + 1;
        sucursalMaximo = i + 1;
      }
    }
  }
  printf("El mes con mayores ganancias fue el mes %d\n",mesMaximo);
  printf("El mes con mayores ganancias corresponde a la sucursal %d\n",sucursalMaximo);
}