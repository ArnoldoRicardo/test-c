/*Crear un programa que lea una letra tecleada por el usuario y diga si se trata de un signo de puntuación, una cifra numérica o algún otro carácter.*/

#include <stdio.h>

main(){
  char c;

  printf("escribe un catacter >>> ");
  scanf("%c",&c);
  switch(c){
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
    printf("es una sifra numerica \n");
    break;
  case ',':
  case '.':
  case ':':
  case ';':
    printf("es un signo de puntucacion \n");
    break;
  default: printf("es otro caracter \n");
  }
}
