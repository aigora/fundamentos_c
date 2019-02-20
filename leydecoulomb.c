/*Autora: Vera Valentin Avellon
  Grupo: Q103
  Descripcion: Calculo de la fuerza entre dos cargas a partir del valor y la distancia entre ellas*/
#include <stdio.h>
int main (){
	float Q1;
	float Q2;
	float radio;
	const float K=9000000000.0;
	float fuerza;
	
	
	
	printf("Introduzca el valor de Q1 en C:\n");
	scanf("%f",&Q1);
	printf("Q1 es %f", Q1);
	
	printf("\nItroduzca el valor de Q2 en C:\n");
	scanf("%f",&Q2);
	printf("Q2 es %f", Q2);
	
	printf("\nIntroduzca el valor de la distancia entre cargas en m:\n");
	scanf("%f",&radio);
	printf("La distancia es %f", radio);
	

	
	fuerza=K*((Q1*Q2)/(radio*radio));
	printf("\nEl modulo de la fuerza es en N %f", fuerza);
	
	return 0;
	
}
