#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>


class Complex
{

public:

 Complex( float = 0, float = 0);
 void Recibe();
 float Real();
 float Imaginario();
 void Suma(float, float, float, float);
 void Resta(float, float, float, float);

 void Impresion()

 {
   std::cout << "( " << R << " , " << I <<" )" << std::endl;
 }

private:
 float R;
 float I;
};
Complex::Complex( float a, float b)
{
  R = a;
  I = a;
}



/*void Complex::Recibe()
{
  std::cout << "\nIntroduzca la parte real del numero: " << std::endl;
  std::cin >> R;
  std::cout << "\nIntroduzca la parte compleja del numero: " << std::endl;
  std::cin >> I;
}*/

void Complex::Recibe()
{
  char numeros[]="3,2";
  std::cout << "\nIntroduce la parte real y imaginaria(ejemplo 4,6) " << std::endl;
  std::cin >> numeros;
  char *ptr;
  ptr = strtok(numeros,",");//argumentos: frase, caracter delimitador
  int i = 0;
  while(ptr != NULL){
    if(i==0){
      R = atof(ptr);
    }
    else{
      I = atof(ptr);
    }
    //std::cout << ptr << std::endl;//linea de debug
    ptr = strtok(NULL, " ");
    i++;
  }
}


float Complex::Real()
{
  return R;
}


float Complex::Imaginario()

{
  return I;
}



void Complex::Suma( float a, float b, float c, float d)

{
 std::cout <<"\n La suma de los numeros es:  ( "  << a + c
  << " , " << b + d
  <<" )" << std::endl;
}


void Complex::Resta( float a, float b, float c, float d)

{
 std::cout <<"\n La resta de los numeros es:  ( " << a - c << " , "
  << b - d
  <<" )" << std::endl;
}


int main()

{
 Complex s;
 Complex x;
 Complex y;

 x.Recibe();
 y.Recibe();
 s.Suma(x.Real(), x.Imaginario(), y.Real(), y.Imaginario());
 s.Resta(x.Real(), x.Imaginario(), y.Real(), y.Imaginario());
 return 0;
}
