// Calcular tiempo de certificacion
// Made by Saulo M. A.
// 19/08/2022
// v 1.0

#include <stdio.h>

int main(void) {
  // Se declaran las variables
  int Tcert = 60;
  int TDedicado; 
  float Trequerido;

  //Se imprime un mensaje indicando al usuario que ingresar
  printf("Ingrega el tiempo que vas a dedicar en minutos\n");
  //Leer el input del usario e ingresarlo en la ubicacion de memoria de Tdedicado
  scanf ("%d", &TDedicado);
  //Se hace la conversion de horas a minutos y se divide entre el tiempo dedicado
  Trequerido = Tcert * 60 / TDedicado;
  //Se imprime el tiempo requerido en dias
  printf("Se requieren %f para obtener el certificado", Trequerido);
  return 0;
}

