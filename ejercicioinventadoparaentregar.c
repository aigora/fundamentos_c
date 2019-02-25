#include <stdio.h>

int main (){
	float distancia;
	float tiempo;
	float velocidad;
	
	printf("Bienvenido a la calculadora de velocidad de MRU\n");
	
	printf("Introduzca valor de distancia (en metros)\n");
	scanf("%f",&distancia);
	printf("Introduzca valor de tiempo (en segundos)\n");
	scanf("%f",&tiempo);
	
	velocidad = distancia/tiempo;
	
	printf("La velocidad (en metros/segundo) es: %.2f m/s", velocidad);
	
	return 0;
}
