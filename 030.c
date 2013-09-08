/*Crear un programa que pida al usuario su contraseña (numérica). Deberá terminar cuando introduzca como contraseña el número 4567, pero volvérsela a pedir tantas veces como sea necesario.*/

#include <stdio.h>

main(){
  int i;
  
  printf("escribe tu codigo para salir >>> ");
  scanf("%i",&i);
  while(i!=4567){
    printf("codigo incorrecto \n >>> ");
    scanf("%i",&i);
  }
}
