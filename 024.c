/*Crear un programa que pida al usuario dos números enteros cortos y diga si son iguales o, en caso contrario, cuál es el mayor de ellos.*/

#include <stdio.h>

main(){
  short int a,b;

  printf("escribe el numero a >>> ");
  scanf("%hi",&a);
  printf("escribe el numero b >>> ");
  scanf("%hi",&b);
  if(a==b) printf("los dos numeros son iguales \n");
  else if(a>b) printf("\"%hi\" es mayor que \"%hi\" \n",a,b);
  else printf("\"%hi\" es menor que \"%hi\" \n",a,b);
}
