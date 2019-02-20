/*
Autora: Beatriz Sanz Delgado
Grupo: Q103
Descripción: Calcular la resistencia a partir de otra y de dos longitudes.
*/

#include <stdio.h>

void main(){
	float resistencia1, longitud1, longitud2, resistenciax;
	printf("Introduzca resistencia1 (omnios):\n");
	scanf("%f",&resistencia1);
	printf("Introduzca longitud1 (cm):\n");
	scanf("%f",&longitud1);
	printf("Introduzca longitud2 (cm):\n");
	scanf("%f",&longitud2);
	resistenciax= resistencia1*(longitud1/longitud2);
	printf("resistencia x=%f omnios\n", resistenciax);
	
}
