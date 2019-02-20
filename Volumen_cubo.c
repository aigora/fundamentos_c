#include<stdio.h>
//Alvaro Garcia
//Q103
//Volumen cubo

int main()
{
	float lado,v;
	printf("Introduce el lado del cubo\n");
	scanf("%f", &lado);
	v = ((lado*lado)*lado);
	printf("El volumen de su cubo es igual a %f",v);
}
