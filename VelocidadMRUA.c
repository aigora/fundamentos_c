/*
Autora: Sonia Somolinos Bravo
Grupo: Q-103
Descripción: Cálculo de la velocidad final en el MRUA
*/


#include <stdio.h>
int main(){
	
	float vi, aceleracion, vf; // vi-velocidad inicial, vf-velocidad final
	int tiempo;
	
	printf("Introduzca la velocidad inicial en m/s:\n");
	scanf("%f", &vi);
	printf("Introduzca la aceleracion en m/s^2:\n");
	scanf("%f", &aceleracion);
	printf("Introduzca el tiempo en segundos:\n");
	scanf("%d", &tiempo);
	
	vf = vi+(aceleracion*tiempo);
	printf("vf: %f", vf);
	
	return 0;
}


	

