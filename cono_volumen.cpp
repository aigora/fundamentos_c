/*
Autor:Diego Gómez
Grupo: Q103
Descripcion: Calcula el volumen de un cono
*/


#include <stdio.h>

int main()
{
	float volumen, radio, altura;
	const float pi=3.14159;
	
	printf("Bienvenido al programa para determinar el volumen de un cono.\n");
	printf("A continuacion se le pedira una serie de datos.\n");
	
	printf("Introduzca la altura de cono en metros:\n");
	scanf("%f", &altura);
	
	printf("Introduzca el radio de la base en metros:\n");
	scanf("%f", &radio);
	
	printf("Volumen = %.3f metros cubicos.\n", volumen=(1.0/3)*pi*radio*radio*altura);
	
	printf("Fin del programa.\n");
	
	return 0;
}
