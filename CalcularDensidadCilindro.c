/* Autora: Vanesa Diaz Baños 54563
Grupo: Q103
Descripción: Calculo de la densidad de un cilindro
*/

#include <stdio.h>
 int main(){
	float radio, altura, masa, densidad, pi;
	pi=3.14159;

	printf("En este ejercicio vamos a calcular la densidad de un cilindro\n");
	printf("En primer lugar hay que calcular el volumen, introduce el radio (en centimetros)\n");
	scanf("%f", &radio);
	printf("A continuacion introduce la altura\n");
	scanf("%f", &altura);
	printf("Introduce la masa (en gramos)\n ");
	scanf("%f", &masa);
	
	densidad=masa/(pi*radio*radio*altura);
	printf("La densidad del cilindro es %f", densidad);
 }
 
 
