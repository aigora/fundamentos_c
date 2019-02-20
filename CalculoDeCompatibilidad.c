/* 
Autora: Noelia Arencibia
Grupo: Q103
Descripción: Operación inventada para calcular la compatibilidad que tienes con Ramón
*/
#include <stdio.h>

int main() {
	int matricula, edad, suerte;
	float zapato, porcentaje;

	printf("Bienvenido al test de compatibilidad con Ramon\n  ");
	printf("Por favor introduzca los datos que le vayamos a pedir\n");
	
	printf("Introduzca su numero de matricula:\n");
	scanf("%i", &matricula);
	printf("Indique su edad:\n");
	scanf("%i", &edad);
	
	printf("Numero talla de zapato:\n");
	scanf("%f", &zapato);
	printf("Numero de la suerte:\n");
	scanf("%i", &suerte);
	
	porcentaje=zapato*23/(suerte+10); 
	printf(" El usuario %i con edad de %i años tiene un %.2f porciento de compatibilidad con Ramon ", matricula, edad, porcentaje);
		
}
