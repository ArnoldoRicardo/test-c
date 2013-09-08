/*un programa que pida al usuario un número entero y diga si es par*/

#include <stdio.h>

main(){
  int n;

  printf("escribe un numero >>>");
  scanf("%d",&n);
  if((n%2)==0) printf("el numero %d es par \n", n);
  else printf("el numero %d es impar \n", n);
}
