/*Crear un programa que pida al usuario dos números reales. Si el segundo no es cero, mostrará el resultado de dividir entre el primero y el segundo. Por el contrario, si el segundo número es cero, escribirá “Error: No se puede dividir entre cero”.*/

#include <stdio.h>

main(){
  float a,b,c;
  
  printf("escribe el primer numero >>> ");
  scanf("%f",&a);
  printf("escribe el segundo numero >>> ");
  scanf("%f",&b);
  if(b!=0){
    c=a/b;
    printf("el resultado de dividir el primer numero entre el segundo es %f \n",c);
  }
  else printf("Error: no se puede dividir entre cero");
}
