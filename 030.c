/*Crear un programa que pida al usuario su contrase�a (num�rica). Deber� terminar cuando introduzca como contrase�a el n�mero 4567, pero volv�rsela a pedir tantas veces como sea necesario.*/

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
