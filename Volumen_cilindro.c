/*
Autora: Dayana Izquierdo
Grupo: Q103
Descripción: Calcular el volumen de un cilindro
*/

#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main (){
	
	float radio;
	float altura;
	float volumen;
	
	printf("\t\tVOLUMEN DE UN CILINDRO\n\n");
	printf("Introduzca el radio del cilindro:\t");
	scanf("%f", &radio);
	printf("Introduzca la altura del cilindro:\t");
	scanf("%f", &altura);

	volumen = PI*pow(radio, 2)*altura;
	
	printf("\nEl volumen del cilindro es %.2f\n", volumen);

}
