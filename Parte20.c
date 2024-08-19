/*Definir los campos necesarios para modelar un registro de alumnos de la FaCENA (Facultad de Ciencias 
Exactas y Naturales y Agrimensura) que serán utilizados por el sistema SIU Guaraní. Luego, determinar el 
tipo y el tamaño de cada campo. Por último, calcular la longitud del registro*/

/*DNI
Apellido 
Nombre 
Edad
Código de la localidad de 
procedencia
Código de la 
carrera que cursa*/

#include <stdio.h>
#include <string.h>

int dni;
char apellido[50];
char nombre[50];
int edad;
int codLocalidad;
int codCarrera;

void ingresoDatos(){
  printf("Ingrese los datos correspondientes\n");
  printf("DNI: ");
  scanf("%d",&dni);

  printf("Apellido: ");
  scanf("%s",apellido);

  printf("Nombre: ");
  scanf("%s",nombre);

  printf("Codigo de la localidad de procedencia: ");
  scanf("%d",&codLocalidad);

  printf("Codigo de la carrera que cursa: ");
  scanf("%d",&codCarrera);

}

void salidaDatos(){
   printf("Tamanio de int: %d bytes\n", sizeof(dni));
   printf("Tamanio de char: %d bytes\n", sizeof(apellido));
   printf("Tamanio de char: %d bytes\n", sizeof(nombre));
   printf("Tamanio de int: %d bytes\n", sizeof(codLocalidad));
   printf("Tamanio de int: %d bytes\n", sizeof(codCarrera));

   int result = sizeof(dni) + sizeof(apellido) + sizeof(nombre) + sizeof(codLocalidad) + sizeof(codCarrera);

   printf("La longitud del registro es de %d\n",result);

}

int main(){
  ingresoDatos();
  salidaDatos();
}