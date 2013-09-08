/*Crear un programa que pida al usuario tres números reales y muestre cuál es el mayor de los tres.*/

#include <stdio.h>

main(){
  float a,b,c;

  printf("Escribe el numero \"a\" >>> ");
  scanf("%f",&a);
  printf("Escribe el numero \"b\" >>> ");
  scanf("%f",&b);
  printf("Escribe el numero \"c\" >>> ");
  scanf("%f",&c);
  if((a>b)&&(a>c)) printf("\"%f\" es el numero mayor \n",a);
  else if((b>a)&&(b>c)) printf("\"%f\" es el numero mayor \n",b);
  else printf("\"%f\" es el numero mayor \n",c);
}
