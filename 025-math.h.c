/*Crear un programa que use el operador condicional para mostrar un el valor absoluto de un número de la siguiente forma: si el número es positivo, se mostrará tal cual; si es negativo, se mostrará cambiado de signo.*/

#include <stdio.h>
#include <math.h>

main(){
  int resultado,a;

  printf("escribe un numero >>> ");
  scanf("%i",&a);
  resultado = (a>0) ? a : abs(a);
  printf("el valor absoluto del numero es: %i \n",resultado);
}
