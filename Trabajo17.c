/*Para emitir los certificados de aprobación de un curso de Python, se dispone de una planilla en la que se 
informan en columnas diferentes el nombre y el apellido de los participantes. Escribir un programa que 
lea dos datos de tipo cadena, correspondientes al nombre y apellido, respectivamente. Utilice una 
función que reciba como parámetro el nombre y el apellido y concatene en una sola cadena el apellido y 
nombre, separados por coma. Mostrar en pantalla la nueva cadena y la longitud de la misma. El 
programa termina cuando el usuario indique una condición de fin de ingreso de datos.*/

/*Uso del typedef para buenas practicas*/

#include <stdio.h>
#include <string.h>

typedef char tCaracter;

tCaracter nombre[50];
tCaracter apellido[50];
tCaracter nombreCompleto[100];
tCaracter opcion;

void ingresoDatos(){
  printf("Ingrese el nombre del participante: ");
  scanf("%s",nombre);
  printf("Ingrese el apellido: ");
  scanf("%s",apellido);
}

void concatenarApellido(){
  strcpy(nombreCompleto, apellido);
  strcat(nombreCompleto, ", ");
  strcat(nombreCompleto, nombre);
}

void mostrarDatos(){
  printf("Nombre completo: %s\n",nombreCompleto);
  printf("La longitud de la cadena es de %d\n",(int)strlen(nombreCompleto));
}

int main(){
  do{
    ingresoDatos();
    concatenarApellido();
    mostrarDatos();
    printf("Ingrese s si desea continuar o n si desea cerrar: ");
    scanf(" %c",&opcion);
    
  }
  while(opcion == 's');

  return 0;
}