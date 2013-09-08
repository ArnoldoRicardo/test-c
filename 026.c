/*Crear un programa que use el operador condicional para dar a una variable llamada “iguales” (entera) el valor 1 si los dos números que ha tecleado el usuario son iguales, o el valor 0 si son distintos.*/

#include <stdio.h>

main(){
  int iguales,a,b;
  
  printf("escribe un numero >>> ");
  scanf("%i",&a);
  printf("escribe otro numero >>> ");
  scanf("%i",&b);
  iguales = (a==b) ? 1:0;
  printf("los numeros son iguales? R: %i \n",iguales);
}
