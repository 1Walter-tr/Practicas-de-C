/*En ocasiones ocurre que se necesitan más de dos alternativas. 
Si bien esta situación podría resolverse anidando estructuras alternativas, esto dificulta mucho la legibilidad
del código cuando las alternativas son numerosas. Además, presenta mayor posibilidad de cometer errores en 
la codificación.
La estructura alternativa múltiple es una toma de decisión especializada que permite evaluar una expresión 
con n posibles resultados, y en base al resultado seleccionar el siguiente bloque de instrucciones a ejecutar, 
de entre varios posibles.
*/

/*switch case(){
  case etiqueta1: instrucciones_1;
                  break;
  case etiqueta2: instrucciones_2;
                  break;
  default: instrucciones_n;
}*/

/*Una farmacia desea emitir el ticket de compra en función de la cantidad y precio del producto vendido, 
y el tipo de producto (P-Perfumería, F-Farmacia y L-Limpieza). Necesita una aplicación para calcular el 
valor de la compra, aplicando una bonificación de acuerdo con el tipo de producto: Perfumería 5%, 
Farmacia 10%, Limpieza 15%. El ticket debe mostrar el importe a pagar y el porcentaje de bonificación, 
con la leyenda “% bonificado: XX”.
*Nota: Recordar el carácter de escape.*/


#include <stdio.h>

char tipoProducto;
float precios;
float bonificacion;
float precioFinal;

void ingresoDatos(){
  printf("Ingrese el tipo de producto: ");
  scanf(" %c",&tipoProducto);
  printf("Ingrese el precio del producto: ");
  scanf("%f",&precios);
}

void salidaDatos(){
  switch (tipoProducto){
    case 'P':
    bonificacion = precios * 0.05;
    precioFinal = precios - bonificacion;
    printf("El importe a pagar es de %.2f\n",precioFinal);
    printf("Bonificado: 5%%");
    break;
    case 'F':
    bonificacion = precios * 0.10;
    precioFinal = precios - bonificacion;
    printf("El importe a pagar es de %.2f\n",precioFinal);
    printf("Bonificado: 10%%");
    break;
    case 'L':
    bonificacion = precios * 0.15;
    precioFinal = precios - bonificacion;
    printf("El importe a pagar es de %.2f\n",precioFinal);
    printf("Bonificado: 15%%");
    break;
    default:
      printf("Tipo de producto no valido\n");
      break;
  }
}

int main(){
  ingresoDatos();
  salidaDatos();

  return 0;
}


