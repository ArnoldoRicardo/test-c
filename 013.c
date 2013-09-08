/*El usuario de nuestro programa podrá teclear dos números de hasta 8 cifras
significativas. El programa deberá mostrar el resultado de dividir el primer número
entre el segundo, utilizando tres cifras decimales.*/

#include <stdio.h>

main(){
  float n1,n2,n3;

  printf("introduce un numero 8 cifras >>> ");
  scanf("%f", &n1);
  printf("introduce un otro numero de 8 cifras >>> ");
  scanf("%f", &n2);
  n3=n1/n2;
  printf("el resultado de dividir %-4.4f entre %-4.4f es: %4.3f",n1,n2,n3);
}
