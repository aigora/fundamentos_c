#include <stdio.h>
/*
Autora: Ester Ruiz
Grupo: Q103
Descripción: Calculo de la ley de gravitacion de newton
*/

int main ()
{
	printf("BIENVENID@ AL CALCULO DE LA LEY DE GRAVITACION DE NEWTON\n");
	printf("Esta ley dice que la fuerza ejercida entre dos cuerpos separados es directamente proporcional al producto de sus masas\ne inversamente proporcional al cuadrado de la distancia.\n");
	printf("Ahora puedes ser tu quien la calcule.\n");
	
	float masa1;
	float masa2;
	float distancia;
	float fuerza;
	const float G = 6.67384*(10^(-11));

	printf("Introduce la masa del primer cuerpo (en kgs):\n");
	scanf("%f", &masa1);
	
	printf("Introduce la masa del segundo cuerpo (en kgs):\n");
	scanf("%f", &masa2);
	
	printf("Introduce la distancia que separa los dos cuerpos (en metros):\n");
	scanf("%f", &distancia);
	
	fuerza= (G*masa1*masa2)/(distancia*distancia);
	
	printf("El modulo de la fuerza calculada es: %.2f N\n", fuerza);
	return 0;
	
}
