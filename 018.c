/*Crear un programa que pida al usuario dos n�meros enteros y diga si el primero es
m�ltiplo del segundo*/

#include <stdio.h>

main(){
  int a,b;
  printf("escribe el primer numero numero >>>");
  scanf("%d", &a);
  printf("escribe el segundo numero >>>");
  scanf("%d", &b);
  if(a%b==0) printf("el primer numero(%d) es m�ltiplo del segundo(%d)\n",a,b);
  else printf("el primer numero no es(%d) m�ltiplo del segundo(%d)\n",a,b);
}
