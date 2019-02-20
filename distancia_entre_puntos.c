/*
Nombre: Maria de la Fuete
Grupo: Q103
Descripción: Formula paa calcular la distancia entre puntos
*/
#include <stdio.h>

int main ()
{
	float x1,y1,x2,y2,distancia;
	printf("Introduzca las coordenadas (x,y) de un 2 puntos bidimensionales:\n");
	printf("Primer punto:\n");
	scanf("%f %f",&x1,&y1);
	printf("Segundo punto:\n");
	scanf("%f %f",&x2,&y2);
	distancia= pow(pow((x1-x2),2)+ pow((y1-y2),2),1.0/2.0);
	printf("La distancia entre los dos puntos es %f",distancia);
	return 0;
}
