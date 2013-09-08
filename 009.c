/* Multiplicar dos números de 4 cifras que teclee el usuario, usando el modificador “long”. */

//librería
#include <stdio.h>

main(){//funcion principal
  //definición de variables
  int n1,n2;
  long int resultado;

  printf("introduce el valor de un numero de 4 cifras >>> ");
  scanf("%d", &n1);
  printf("introduce el valor de otro numero con 4 cifras >>> ");
  scanf("%d", &n2);
  resultado=n1*n2;
  printf(" el resultado de multiplicar %d con %d es: %d \n", n1,n2,resultado);
}
