/*Crear un programa calcule cuantas cifras tiene un número entero positivo (pista: se puede hacer dividiendo varias veces entre 10).*/

#include <stdio.h>

main(){
  unsigned int a=0,b;
  printf("escribe un numero entero positivo >>> ");
  scanf("%i",&b);
  while(b>0){
    b/=10;
    a++;
  }
  if(b==0) printf("el numero tiene 1 cifra \n");
  else printf("el numero tiene %i cifras \n",a);
}
