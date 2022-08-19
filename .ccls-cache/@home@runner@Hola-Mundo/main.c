// Calcular tiempo de certificacion
// Made by Saulo M. A.
// 19/08/2022
// v 1.0

#include <stdio.h>

int main(void) {
  int Tcert = 60;
  int TDedicado; 
  float Trequerido;

  printf("Ingrega el tiempo que vas a dedicar en minutos\n");
  scanf ("%d", &TDedicado);
  Trequerido = Tcert * 60 / TDedicado;
  printf("Se requieren %f para obtener el certificado", Trequerido);
  return 0;
}

