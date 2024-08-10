/*Para otorgar un préstamo, un banco evalúa el sueldo del solicitante. Si el sueldo es mayor o igual a 
$100000, se autoriza un préstamo de hasta $300000. Para sueldos inferiores, sólo se autoriza un 
préstamo de hasta el 75% de sus ingresos. El banco desea tener un programa que permita ingresar el 
monto del sueldo del solicitante y muestre en pantalla una leyenda indicando el monto de préstamo 
autorizado.*/

#include <stdio.h>

float salario;
float prestamo;

void general(){
  printf("Ingrese su salario mensual: ");
  scanf("%f",&salario);

  if(salario >= 100000){
    printf("El prestamo que se le otorga es hasta $300000\n");
  }
  else{
    prestamo = salario * 0.75;
    printf("El prestamo que se le autoriza es de %.2f\n",prestamo);
  }
}

int main(){
  general();

  return 0;
}