/* Autora: Laura Úbeda
Grupo: Q103 
Descripción: Este programa calcula la presión de un gas ideal a partir del volumen, temperatura y número de moles con la ecuación de los gases ideales.*/

#include <stdio.h>

int main(){
	const float R = 0.08205746;
	
	float presion, volumen, moles, temperatura; 

	printf("CALCULADORA DE LA PRESIÓN DE UN GAS IDEAL\n");
	printf("Introduce el volumen del gas (en litros)\n");
	scanf("%f", &volumen);
	printf("Introduce el numero de moles\n");
	scanf("%f", &moles);
	printf("Introduce la temperatura (en kelvin)\n");
	scanf("%f", &temperatura);

presion = (moles*R*temperatura)/volumen;

printf("La presion del gas es de %f atm.\n", presion);	
	
	return 0;
}
	
