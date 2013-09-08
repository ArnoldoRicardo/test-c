/*Crear un programa que use tres variables x,y,z. Sus valores iniciales serán 15, -10,
2.147.483.647. Se deberá incrementar el valor de estas variables. ¿Qué valores esperas
que se obtengan? Contrástalo con el resultado obtenido por el programa.
*/

//libreria
#include <stdio.h>

main(){//funcion principal
  unsigned int x=15;
  unsigned long int z=2147483647; //este es el numero mayor que puedo poner
  int y=-10;

  x++;
  y++;
  z++;

  printf("los valores son %d %d %ld \n", x,y,z);
}
