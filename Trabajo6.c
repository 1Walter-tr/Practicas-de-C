/*Alternativa Simple
La estructura alternativa simple ejecuta una acción o conjunto de acciones cuando se cumple una determinada 
condición. 
Como resultado de evaluar la condición, puede ocurrir:
1. Que la condición sea VERDADERA → en cuyo caso se ejecuta la acción preestablecida
2. Que la condición sea FALSA → ante esta situación no se hace nada
                                  Sintaxis en C: 
                              if (expresion_logica){
                                  instrucciones;
                                   }*/

/*Un supermercado desea ofrecer un beneficio para atraer clientes. Decide realizar una bonificación de 
15% al total de la compra si ésta es mayor o igual a $5000 y la forma de pago es en efectivo o se 
compran más de 10 productos (Utilice una sola expresión lógica). El ticket debe mostrar la bonificación 
y la forma de pago en el detalle. Las formas de pago disponibles son (c-tarjeta de crédito / d-tarjeta 
de débito / e-efectivo). 
*Nota: 
- Prestar atención al ingreso de datos de tipo char
*/


#include <stdio.h>

int cantUnidades;
float precioUnitario;
char formaPago;
float total;
float bonificacion;
float totalBonificacion;

void ingresoDatos(){
  printf("Ingrese la cantidad de productos: ");
  scanf("%d",&cantUnidades);
  printf("Ingrese el precio unitario: ");
  scanf("%f",&precioUnitario);
  printf("Ingrese la fomra de pago (c-tarjeta de crédito / d-tarjeta de débito / e-efectivo): ");
  scanf(" %c",&formaPago);
}

void salidaDatos(){
  total = cantUnidades * precioUnitario;

  printf("Cant. Unidades: %d ",cantUnidades);
  printf("Precio Unit: %.2f\n",precioUnitario);

  if(cantUnidades >= 10 || total >= 5000 || formaPago == 'e'){
    bonificacion = total * 0.15;
    totalBonificacion = total - bonificacion;
    printf("Total: %.2f\n",total);
    printf("Forma de pago: %c\n",formaPago);
    printf("Bonificacion: %.2f\n",bonificacion);
    printf("Total a pagar: %.2f\n",totalBonificacion);
    printf("Gracias por su compra\n");

  }
  else{
    printf("Total: %.2f\n",total);
    printf("forma de pago: %c\n",formaPago);
    printf("Bonificion: %.2f\n",bonificacion);
    printf("Total a pagar: %.2f\n",total);
    printf("Gracias por su compra\n");
  }

  
}

int main(){
  ingresoDatos();
  salidaDatos();

  return 0;
}

