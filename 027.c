/*Usar el operador condicional para calcular el mayor de dos números.*/

#include <stdio.h>

main(){
  int a,b,mayor;

  printf("escribe un numero entero >>> ");
  scanf("%i",&a);
  printf("escribe otro numero entero >>> ");
  scanf("%i",&b);
  mayor = (a>b) ? a:b;
  printf("el numero mayor es %i \n",mayor);
}
