/*Crear un programa que use el operador condicional para mostrar un el valor absoluto de un n�mero de la siguiente forma: si el n�mero es positivo, se mostrar� tal cual; si es negativo, se mostrar� cambiado de signo.*/

#include <stdio.h>
#include <math.h>

main(){
  int resultado,a;

  printf("escribe un numero >>> ");
  scanf("%i",&a);
  resultado = (a>0) ? a : abs(a);
  printf("el valor absoluto del numero es: %i \n",resultado);
}
