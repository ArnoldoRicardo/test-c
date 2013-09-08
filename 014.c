/*Descubrir cual es el espacio ocupado por un “int” en el sistema operativo y compilador
  que utilizas.*/
#include <stdio.h>

main(){
  float f;
  int i;
  double d;

  printf("el tamaño de mi float es %d \n", sizeof f);
  printf("el tamaño de mi int es %d \n", sizeof i);
  printf("el tamaño de mi double es %d \n", sizeof d);
}
