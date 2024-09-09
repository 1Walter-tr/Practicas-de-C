/*. El río Paraná presenta una histórica bajante en todo su cauce, y no se registran valores similares durante 
abril desde hace más de 130 años. El nivel del agua apenas alcanza los 70 centímetros en algunos 
sectores. Esta situación produce grandes pérdidas económicas, debido a que afecta en gran medida al 
transporte fluvial. Las autoridades del gobierno desean conocer información de las alturas del río, a 
efectos de relacionarlas con las pérdidas producidas. La Prefectura cuenta con los datos de la altura 
máxima mensual del río Paraná, organizadas en dos series:  - - 
Serie1: mayo/18 a abril/19 
Serie 2: mayo/19 a abril/20 
Se requiere un informe con lo siguiente: 
-cuál fue la menor altura en cada una de las dos series, y en qué mes ocurrió  
-en qué serie se dio la menor altura. 
*Nota:
-Utilizar vectores para almacenar las alturas en cada serie
-Para cargar las series, defina el/los módulos necesarios para la generación de la primera, y luego 
reutilícelo/s para generar la segunda serie*/

#include <stdio.h>
#define SERIES 4

float alturasRios[SERIES];
float alturaMinima;
int serieCorrespondiente;

void ingresoDatos(){
  for(int i = 0; i < SERIES; i++){
    printf("Ingrese la altura de la serie %d: ",i+1);
    scanf("%f",&alturasRios[i]);
  }
}

void salidaDatos(){
  alturaMinima = alturasRios[0];
  serieCorrespondiente = 1;

  for(int i = 0; i < SERIES; i++){
    if(alturasRios[i] < alturaMinima){
      alturaMinima = alturasRios[i];
      serieCorrespondiente = i+1;
    }
  }

  printf("La altura minima registrada es de %.2f\n",alturaMinima);
  printf("La altura minima corresponde a la serie %d\n",serieCorrespondiente);
}

int main(){
  ingresoDatos();
  salidaDatos();

  return 0;
}