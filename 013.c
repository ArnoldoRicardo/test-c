/*El usuario de nuestro programa podr� teclear dos n�meros de hasta 8 cifras
significativas. El programa deber� mostrar el resultado de dividir el primer n�mero
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
