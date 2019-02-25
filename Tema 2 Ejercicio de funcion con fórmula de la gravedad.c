#include <stdio.h>


void main(){
	const float G= 6.67e-11f;
	float m1, m2, d, F;
	// Donde m1 y m2 son las masas de los cuerpos y d la distancia entre ellos
	printf("Introduzca la m1 y la m2 en Kg:");
	scanf("%f %f", &m1, &m2);
	printf("Introduzca la distancia d entre m1 y m2 en m:");
	scanf("%f",&d);
	F= G*(m1*m2)/d*d;
	
	printf("La fuerza de atraccion F(N) es: %f\n", F);
}
