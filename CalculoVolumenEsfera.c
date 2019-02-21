//Giannina Molina Pérez 54101
#include <stdio.h>
#include <math.h>
int main()
{
	float radio, volumen; //definimos el volumen y el radio de la esfera como variables
	const float pi=3.14159; //definimos pi como una constante
	printf("Vamos a hallar el volumen de una esfera\n");
	printf("Introduzca el valor del radio de la esfera en metros\n");
	scanf("%f",&radio);
	volumen= 4*pi*pow(radio,3); //formula de la esfera 
	printf("El volumen de la esfera es:\n %.3f metros al cubo",volumen);
	return 0;
}
