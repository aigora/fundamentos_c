/*
Autora: Manuel Dégano
Grupo: Q103
Descripción: Este programa imprime la superficie de una esfera.
*/

#include <stdio.h>

int main()
{
	int radio;
	printf("Introduce el Radio de una esfera\n");
	scanf("%i", &radio);
	
	float superficie;
	superficie= (4 * 3.14159 * (radio * radio * radio))/3;
	printf("Una esfera de radio %i tiene una superficie de %f", radio, superficie);
}
