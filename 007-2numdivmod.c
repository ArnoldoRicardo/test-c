/* ejercicio numero 7
el usuario teclear� dos n�meros (x e y), y el programa deber� calcular cual es el resultado de su divisi�n y el resto de esa divisi�n.*/

//liberia
#include <stdio.h>

//funcion principal
main() {
  //definicion de variables
  int x,y,div,mod;
  
  //programa
  printf ("introduce el numero x >>> ");
  scanf ("%d", &x);
  printf ("introduce el numero y >>> ");
  scanf ("%d", &y);
  div=x/y;
  printf ("x entre y es igual a %d \n", div);
  mod=x%y;
  printf ("y el resto de la divicion %d \n", mod);
}
