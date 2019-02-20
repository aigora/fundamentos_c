/*
Autora: María Fermosel Álvarez
Grupo: Q103
Descripción: Calcula la hipotenusa de un triángulo equilátero
*/

#include <stdio.h>
#include <math.h>

int main()
{
	float c1, c2, h;
	printf("vamos a calcular la hipotenusa de un triangulo equilatero\n");
	
	printf("introduce el primer cateto\n");
	scanf ("%f", &c1);
	
	printf("introduce el segundo cateto\n");
	scanf ("%f", &c2);
	
	h=sqrt((c1*c1)+(c2*c2));
	
	printf ("la hipoteunsa del triangulo de catetos %.2f y %.2f %.2f", c1, c2, h);
	return 0;
}
