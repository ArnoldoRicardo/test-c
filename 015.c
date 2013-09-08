/*un programa que pida al usuario que teclee cuatro letras y las
muestre en pantalla juntas, pero en orden inverso, y entre comillas dobles. Por ejemplo si las
letras que se teclean son a, l, o, h, escribiría "hola".
*/

#include <stdio.h>

main(){
  char la,le,li,lo;

  printf("teclea una letra >>> ");
  scanf("%c%c", &la);
  printf("teclea otra letra >>> ");
  scanf("%c%c", &le);
  printf("teclea otra letra >>> ");
  scanf("%c%c", &li);
  printf("teclea otra letra >>> ");
  scanf("%c%c", &lo);
  printf("lo que tecleaste invertido es \"%c%c%c%c\" \n",lo,li,le,la);
}
