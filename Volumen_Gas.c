/*
Autor: Carlos Cruz
Grupo: Q103
Descripción: Programa que calcula el volumen que ocupa un gas
*/

#include <stdio.h>

int main () {
	
	float moles, temperatura, presion, volumen;
	
	printf("CALCULO DEL VOLUMEN QUE OCUPA UN GAS\n");
	
	printf("Introduce la cantidad de moles del gas:\n");
	scanf("%f", &moles);
	printf("Introduce la temperatura en grados Kelvin:\n");
	scanf("%f", &temperatura);
	printf("Introduce la presion en atmosferas:\n");
	scanf("%f", &presion);
	
	volumen=moles*temperatura*8.206E-5/presion;
	
	printf("El volumen que ocupa el gas es: %.5f metros cubicos", volumen);
	
	return 0;
}
