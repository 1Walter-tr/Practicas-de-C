/*La maestra de la Sala Verde del jardín maternal Bichito de Luz, quiere pintar las figuras 
circulares de madera con las que juegan los niños (todas del mismo tamaño). Una vez que 
sepa toda el área a cubrir, en la pinturería le indicarán la cantidad necesaria de pintura. Para 
ello necesita saber el área del círculo de las figuras. Escriba una función que calcule y devuelva
el valor del área. El programa debe permitir el ingreso de la cantidad de figuras y el valor del 
radio, y debe mostrar en pantalla la cantidad de figuras y el total de la superficie a cubrir.
Nota: área de círculo= PI * r2*/

#include <stdio.h>

int cantFiguras;
float valorRadio;
float totalSuperficie;

void ingresoDatos(){
  printf("Ingrese la cantidad de figuras a pintar: ");
  scanf("%d",&cantFiguras);
  printf("Ingrese el area a cubrir: ");
  scanf("%f",&valorRadio);
}

void salidaDatos(){
  totalSuperficie = 3.14 * valorRadio * valorRadio;

  printf("La cantidad de de figuras es de %d\n",cantFiguras);
  printf("El total de la superficie a cubrir es de %.2f\n",totalSuperficie);
}

int main(){
  ingresoDatos();
  salidaDatos();

  return 0;
}