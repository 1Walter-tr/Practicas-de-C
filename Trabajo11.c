/*En ocasiones se requiere ejecutar una secuencia de instrucciones un número determinado 
de veces que se conoce de antemano. 
El lenguaje C posibilita automatizar tareas repetitivas de este tipo a través del comando for
En primer lugar, tenemos que identificar la secuencia de instrucciones que se desea repetir
→ identificar el PATRÓN.
                                      Sintaxis en C:
                                      for(inicializacion; condicionIteracion;incremento){
                                        secuencia de instrucciones que se desean repetir
                                      }*/
/*Mostrar los números enteros desde 1 hasta N, sumarlos e informar la suma. */


#include <stdio.h>
#define N 20

void generalPracticas(){
  for(int i = 0; i <= N; i++){
    printf("%d\n",i);
  }
}

int main(){
  generalPracticas();

  return 0;
}

