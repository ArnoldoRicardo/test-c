/*Crear un programa que use tres variables x,y,z. Sus valores iniciales ser�n 15, -10, 214.
Se deber� incrementar el valor de estas variables en 12, usando el formato abreviado.
�Qu� valores esperas que se obtengan? Contr�stalo con el resultado obtenido por el
programa.*/

#include <stdio.h>

main(){
  unsigned int x=15,z=214;
  int y=-10;

  x+=12; //esto es igual a x=x+12
  y+=12;
  z+=12;
  
  printf("los resultados son %d %d %d \n",x,y,z);
}
