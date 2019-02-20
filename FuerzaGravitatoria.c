// Autor: David Carrillo Rodríguez 
// Grupo: Ingenieria quimica


#include <stdio.h>

int main(){
	
	float masa1, masa2, distancia, F;
	const float g = 0.0000000000667;
	
	printf("Programa para calcular la fuerza gravitatoria\n");
	
	printf("Ponga el valor de la masa 1 en kgs\n");
	scanf("%f", &masa1);
	
	printf("Ponga el valor de la masa 2 en kgs\n");
	scanf("%f", &masa2);
	
	printf("Ponga el valor de la distancia en metros\n");
	scanf("%f", &distancia);
	
	F = (g*masa1*masa2)/(distancia*distancia);
	printf("Fuerza gravitatoria = %.16f\n" , F);
	
	return 0;
	
}


