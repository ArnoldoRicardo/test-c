/*Crear un programa que multiplique dos números enteros de la siguiente forma: pedirá al usuario un primer número entero. Si el número que se que teclee es 0, escribirá en pantalla “El producto de 0 por cualquier número es 0”. Si se ha tecleado un número distinto de cero, se pedirá al usuario un segundo número y se mostrará el producto de ambos.*/

//libreria
#include <stdio.h>

//funcion principal
main(){
  int a,b,c;
  
  printf("escribe el primer numero >>> ");
  scanf("%d",&a);
  if(a==0) printf("El producto de %d po cualquier numero es %d \n",a,a);
  else{
    printf("escribe el segundo numero >>> ");
    scanf("%d",&b);
    c=a*b;
    printf("el producto de ambos numeros es %d \n",c);
  }
}
