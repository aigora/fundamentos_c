#include <stdio.h>
// Autor: Javier Palomeque
// Grupo: Q103

int main () {
	float volumen, altura, radio, pi;
	
	pi = 3.1416;
	
	printf("Introduce el radio de la base\n");
	scanf("%f", &radio);
	
	printf("Introduce la altura del cilindro\n");
	scanf("%f", &altura);
	
	volumen = pi*radio*radio*altura;
	
	printf("Volumen = %.2f", volumen);
}
