/*Crear un programa que pida al usuario dos números enteros y diga “Uno de los
números es positivo”, “Los dos números son positivos” o bien “Ninguno de los números
es positivo”, según corresponda.*/

#include <stdio.h>

main(){
  int a,b;

  printf("escribe un numero >>> ");
  scanf("%d",&a);
  printf("escribe otro numero >>> ");
  scanf("%d", &b);
  if((a>0)&&(b>0)) printf("los numeros:\"%d\" y \"%d\" son positivos \n",a,b);
  else if((a>0)&&(b<0)) printf("el numero \"%d\" es positivo y \"%d\" es negativo \n",a,b);
  else if((a<0)&&(b>0)) printf("el numero \"%d\" es negativo y \"%d\" es positivo \n",a,b);
  else printf("los numeros: \"%d\" y \"%d\" son negativos \n",a,b);
}
