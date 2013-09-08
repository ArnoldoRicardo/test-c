/* Cuál sería el resultado de las siguientes operaciones? a=5; b=a+2; b-=3; c=-3;
   c*=2; ++c; a*=b;*/

#include <stdio.h>

main(){
  short unsigned int a=5,b,d,e,i;
  short int f,c,g,h;
  
  d=b=a+2;
  e=b-=3;
  f=c=-3;
  g=c*=2;
  h=++c;
  i=a*=b;

  printf("a=5,R:%d b=a+2,R:%d b-=3,R:%d c=-3,R:%d c*=2,R:%d ++c,R:%d a*=b,R:%d \n",a,d,e,f,g,h,i);
}
