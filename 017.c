/*un programa que pida al usuario dos números enteros y diga cual es el mayor de  ellos.*/

#include <stdio.h>

main(){
  int n1,n2;

  printf("escribe el primer numero >>> ");
  scanf("%d",&n1);
  printf("escribe el segundo numero >>> ");
  scanf("%d",&n2);
  if(n1>n2) printf("el primer numero \"%d\" es mayor \n", n1);
  else printf("el segundo numero \"%d\" es mayor \n", n2);
}
