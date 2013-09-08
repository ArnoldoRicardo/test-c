/*Crear un programa que lea una letra tecleada por el usuario y diga si se trata de una vocal, una cifra numérica o una consonante.*/

#include <stdio.h>

main(){
  char tecla;

  printf("escribe un caracter >>> ");
  scanf("%c",&tecla);
  switch (tecla) {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    printf("es una vocal \n");
    break;
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    printf("es una cifra numerica \n");
    break;
  default: printf("es una cosonante \n");
  }
}
