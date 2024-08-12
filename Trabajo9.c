/*Se dispone de un termómetro para medir con exactitud la temperatura en un determinado lugar. Se 
desea una aplicación que permita ingresar un valor de temperatura y muestre un mensaje que indique 
la sensación térmica, considerando los rangos siguientes:
Rango de temperatura Sensación térmica
[-10, 10) Mucho frío
[10, 15) Poco frío
[15, 25) Temperatura normal
[25, 30) Poco calor
[30, 45) Mucho calor*/

#include <stdio.h>

int temp;

void ingresoDatos(){
  printf("Ingrese la temperatura actual: ");
  scanf("%d",&temp);
}

void salidaDatos(){
  if(temp <= 10){
    printf("Mucho frio\n");
  }
  else if (temp >= 11 && temp <= 15){
    printf("Poco frio\n");
  }
  else if(temp >= 16 && temp <= 25){
    printf("Temperatura normal\n");
  }
  else if(temp >= 26 && temp <= 30){
    printf("Poco calor\n");
  }
  else{
    printf("Mucho calor\n");
  }
}

int main(){
  ingresoDatos();
  salidaDatos();

  return 0;
}