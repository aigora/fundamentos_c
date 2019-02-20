//Autor: Dalila Martinez Baez Q103
//Calcula el campo eléctrico que actua sobre la unidad positiva de carga colocada en reposo en un punto del espacio
#include<stdio.h>
int main()
{
	float E,F,q;
	printf("Vamos a calcular el campo eléctrico que actua sobre la unidad positiva de carga colocada en reposo en un punto del espacio\n");
	printf("Escribe el valor de la fuerza \n");
	scanf("%f", &F);
	printf("Escribe el valor de la carga de prueba\n");
	scanf("%f", &q);
	E=F/q;
	printf("El valor del campo electrico es %f N/C \n", E);
	return 0;
}
