/*
Autora: Sophia Villanova
Grupo: Q103
Descripción: Calcula la posición de un objeto, utilizando las ecuaciones del Movimiento Rectilineo Uniformemente Acelerado. 
Solicita como datos: la velocidad, aceleracion, posicion incial y tiempo del movimiento.  
*/
#include <stdio.h>

int main () {
	float  v, a, t, po, p ; // donde v es velocidad, a es aceleración, t es tiempo y po es posicion inicial y p es posicion final
	
	printf("Calculador de la posicion de un objeto con respecto al tiempo, velocidad y aceleracion del movimiento\n");
	printf("Introduce la posicion inicial del objeto en metros\n");
	scanf("%f", &po);
	printf("Introduce la velocidad del objeto en metros/segundos\n");
	scanf("%f", &v);
	printf("Introduce la aceleracion del objeto en metros/segundos^2:\n");
	scanf("%f", &a);
	printf("Introduce el tiempo en segundos:\n");
	scanf("%f", &t);
	
	p=((a*t*t)/2)+(v*t)+po;
	printf("La posicion final del objeto es: %.2f metros", p);
	
	return 0;
}

