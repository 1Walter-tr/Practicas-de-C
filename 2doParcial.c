#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SUCURSALES 4
#define MESES 3

float gananciasMes[SUCURSALES][MESES];
float sumaMeses[MESES];
float mayorSumaMeses = 0;
int posicionMayorSumaMeses = 0;
float gananciasMesMayor = 0;
int posicionMesMayor = 0;
int posicionMesMayorSucursal = 0;

void ingresoDatos(){
  for(int i = 0; i < SUCURSALES; i++){
    printf("Ingrese las ganancias de la sucursal %d\n",i+1);
    for(int j = 0; j < MESES; j++){
      printf("Sucursal %d, Mes %d: ",i+1,j+1);
      scanf("%f",&gananciasMes[i][j]);
    }
  }
}

void calculoDatos(){
  for(int j = 0; j < MESES; j++){
    sumaMeses[j] = 0;
    for(int i = 0; i < SUCURSALES; i++){
      sumaMeses[j]+=gananciasMes[i][j];
      
      if(gananciasMes[i][j] > mayorSumaMeses){
        mayorSumaMeses = gananciasMes[i][j];
        posicionMayorSumaMeses = j+1;
        posicionMesMayorSucursal = i+1;
      }
    }
    
    if(sumaMeses[j] > gananciasMesMayor){
      gananciasMesMayor = sumaMeses[j];
      posicionMesMayorSucursal = j+1;
    }
  }
}

void mostrarDatos(){
  for(int j = 0; j < MESES; j++){
    printf("Mes %d: %.2f\n",j+1,sumaMeses[j]);
  }
  printf("La sucursal con mayor ganancia en el mes es el mes %d con %.2f\n",posicionMesMayor,gananciasMesMayor);
  printf("La sucursal con mayor ingreso en el mes es la sucursal %d en el mes %d\n",posicionMesMayorSucursal,posicionMesMayor);
}

int main(){
  char titulo[50];
  ingresoDatos();
  calculoDatos();
  printf("Ingrese un titulo para la salida de datos: ");
  scanf("%s",titulo);
  for(int i = 0; titulo[i] !='\0'; i++){
    titulo[i] = toupper(titulo[i]);
  }
  printf("%s\n",titulo);
  mostrarDatos();


}