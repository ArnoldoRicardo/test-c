/*ejercicio numero 8
el usuario tecleará dos números (a y b), y el programa mostrar el resultado de la operación (a+b)*(a-b) y el resultado de la operación a^2-b^2
 */

//libreria
#include <stdio.h>

//funcion principal
main (){
  int a,b,bicon,cuad;

  printf ("introduce el valor de a >>> ");
  scanf ("%d", &a);
  printf ("introduce el valor de b >>> ");
  scanf ("%d", &b);
  bicon=(a+b)*(a-b);
  printf ("el resultado de los binomios conjugados es: %d \n", bicon);
  cuad=(a*a)-(b*b);
  printf ("la diferencia de cuadrados perfectos es: %d \n", cuad);
}
