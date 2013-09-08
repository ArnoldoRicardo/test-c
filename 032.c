/*Crea un programa que escriba en pantalla los números pares del 26 al 10 (descendiendo), usando “while”.*/

#include <stdio.h>

main(){
  int i=26;
  
  printf("numero pares del 26 al 10: \n");
  while(i>=10){
    if((i%2)==0) printf("%i \n",i);
    i--;
  }
}
