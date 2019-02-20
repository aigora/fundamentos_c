/*
Autora: Rocío Berzal Cabetas
Grupo: Q103
Descripción: Calcula la velocidad de un vehículo TEMA 2 OPERADORES
*/ 

#include<stdio.h>

int main()
{
	float d, xo, x, vo, t, a;
	
	printf ("DISTANCIA QUE RECORRE UN VEHICULO\n\n");
	
	printf("Introduzca los datos que apareceran a continuacion\n\n");

	printf("Punto desde donde parte el vehiculo en m\n");
	scanf ("%f", &xo);
	
	printf("Velocidad a la que va el vehiculo en m/s\n");
	scanf("%f", &vo);
	
	printf("Aceleracion del vehiculo en m^2/s\n");
	scanf("%f", &a);
	
	printf ("Tiempo que transcurre en segundos\n");
	scanf ("%f", &t);
	
	d=xo+vo*t+0.5*a*t;
	x=d-xo;
	
	printf("El vehiculo ha recorrido %.2f metros en %.2f segundos\n", x, t);
}
