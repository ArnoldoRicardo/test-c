/*Crear un programa que pida una letra al usuario y diga si se trata de una vocal.*/

#include <stdio.h>

main(){
  char c;

  printf("introduce una letra >>> ");
  scanf("%c", &c);
  if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')) printf("la letra \"%c\" es una vocal \n",c);
  else printf("la letra \"%c\" no es una vocal \n",c);
}
