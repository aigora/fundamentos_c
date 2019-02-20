/*
Autor: Diego Gómez
Grupo:Q103
Descripcion: Dado un cilindro, calcula el volumen y su area total.
*/



#include <stdio.h>

int main()
{
	
	const float pi = 3.14;
	float radio, altura, area_total, volumen;
	
	printf("A continuacion se le pedira una serie de datos para calcular el volumen y el area total de un cilindro.\n");
	printf("En lo que respecta al area total, dependiendo de si el cilindro tiene o no, alguna o varias tapas, se le mostrara las soluciones de 0 a 2 tapas.\n");
	
	printf("Introduzca el radio del cilindro en metros\n");
	scanf("%f", &radio);
	
	printf("Introduzca la altura del cilindro en metros\n");
	scanf("%f", &altura);
	
	volumen = pi*radio*radio*altura;
	printf("El volumen es: %f metros cubicos.\n", volumen);
	
	area_total = 2*pi*radio*altura;
	printf("Cilindro con 0 tapas, el area total es: %f metros cuadrados.\n", area_total);
	
	area_total = (2*pi*radio*altura)+(pi*radio*radio);
	printf("Cilindro con 1 tapa, el area total es: %f metros cuadrados.\n", area_total);
	
	area_total = 2*pi*radio*(altura+radio);
	printf("Cilindro con 2 tapas, el area total es: %f metros cuadrados.\n", area_total);
		
	return 0;
	
}
