#include <stdio.h>
#include <math.h>

/*
* Un programa q pida los tres lados del triangulo 
* y q tipo de triangulo es y q de perimetro y area
*/

float semiPerimetro(float a, float b, float c){
	float s;

	s = a + b + c;
	s = s / 2;

	return s;
}

float area(float s, float a, float b, float c){
	float ar, d, e, f;

	d = s - a;
	e = s - b;
	f = s - c;
	ar = s * d * e * f;
	ar = sqrt(ar);

	return ar;
}

int main(){

	float base, l, r, tipo;
	float ar, s;

	printf("introduce la base del triangulo\n");
	scanf("%f", &base);
	printf("introduce el lado izquierdo del triangulo\n");
	scanf("%f", &l);
	printf("introduce derecho triangulo\n");
	scanf("%f", &r);

	s = semiPerimetro(base, l, r);
	ar = area(s, base, l , r);
	printf("el area es %f\n", ar);

	return 0;
}

