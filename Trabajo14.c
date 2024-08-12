#include <stdio.h>

int opciones;
int nroAtencion;
char tipoCombustible;
float importe;
float descuento;
float descuentoSuper;
int cantClientesSuper = 0;
int cantClientes = 0;
float totalRecaudado = 0.0;

void ingresoDatos(){
  printf("Ingrese su numero de atencion: ");
  scanf("%d",&nroAtencion);
  printf("Ingrese el tipo de combustible (s-super, c-comun, f-infinia): ");
  scanf(" %c",&tipoCombustible);
  printf("Ingrese el importe a pagar: ");
  scanf("%f",&importe);
}

void salidaDatos(){
  cantClientes++;
  totalRecaudado = totalRecaudado + importe;

  if(tipoCombustible == 's'){
    cantClientesSuper++;
  }

  if(tipoCombustible == 's' && importe >= 55000){
     descuento = importe * 0.20;
     descuentoSuper = importe - descuento;
     printf("El numero de atencion es %d\n",nroAtencion);
     printf("El tipo de combustible: %c\n",tipoCombustible);
     printf("El importe a pagar es: %.2f\n",descuentoSuper);
  }
  else{
     printf("El numero de atencion es %d\n",nroAtencion);
     printf("El tipo de combustible: %c\n",tipoCombustible);
     printf("El importe a pagar es: %.2f\n",importe);

  }
}

int main(){
  do{
    ingresoDatos();
    salidaDatos();
    printf("Ingrese 1 si desea continuar o 2 si desea cerrar: ");
    scanf("%d",&opciones);  
  }
  while(opciones == 1);
    printf("La cantidad de clientes atendidos en el dia es de: %d\n",cantClientesSuper);
    printf("El total de ganancias recaudadas es de: %.2f\n",totalRecaudado);
    printf("La cantidad de personas que cargaron nafta super es de: %d\n",cantClientesSuper);
  
  return 0;
}