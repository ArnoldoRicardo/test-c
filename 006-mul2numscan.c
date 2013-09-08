/*ejercicio numero 6
multiplicar 2 números tecleados por el usuario*/

#include <stdio.h>

main (){
  int n1,n2,producto;

  printf ("introduce el primer numero >>> ");
  scanf ("%d", &n1);
  printf ("introduce el segundo numero >>>> ");
  scanf ("%d", &n2);
  producto=n1*n2;
  printf ("el resultado de multiplicion de los 2 numeros es: %d \n", producto);
}
