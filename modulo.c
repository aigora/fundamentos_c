/*
Autor: Alejandro Tejedor
Grupo: Q103
Descripcion: Calcula el modulo del vector de un vector cin 3 cordenadas
*/
#include <stdio.h>
#include <math.h>

int main (){
	float x, y, z, m, v, x2, y2, z2;
	printf("Calculadora del modulo de un vector con 3 coordenadas\n");
	printf("Introduce la primera coordenada\n");
	scanf("%f", &x);
	printf("Introduce la segunde coordenada\n");
	scanf("%f", &y);
	printf("Introduce la tercera coordenada\n");
	scanf("%f", &z);
	x2=x*x;
	y2=y*y;
	z2=z*z;
	v=x2+y2+z2;
	m=sqrt(v);
	printf("El modulo del vector es %f \n", m);
	return 0;
	}
