/*
Autor: Diego Medina
Grupo:103
Descaripci�n: Este programa resuelve una ecuaci�n de segundo grado a partir de introducir los terminos a,b y c.
*/
#include <stdio.h>
#include <math.h>

int main()

{
	float a,b,c,resultado1,resultado2;
	
	printf("*RESOLVER ECUACIONES DE SEGUNDO GRADO*\n");
	printf("Escribe el termino a\n");
scanf("%f",&a);

	printf("Ahora escribe el termino b\n");
	
scanf("%f", &b);

	printf("Finalmente pon el termino c\n");
	
scanf("%f", &c);


resultado1= (-b+(sqrt(b*b-4*a*c)))/2*a;      //raiz positiva//
resultado2= (-b-(sqrt(b*b-4*a*c)))/2*a;     //raiz negativa//


	printf("x1= %.1f\n", resultado1);
	printf("x2= %.1f\n", resultado2);


}