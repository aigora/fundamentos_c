/*
Autora: PAULA DE ANTONIO
Grupo: Q103
Descripcion: Cálculo del volumen de un gas segun la ecuacion de Los Gases Ideales: PV=nRT.
*/

#include <stdio.h>

int main(){
	float mol;
	float temperatura;
	float presion;
	const float R=0.08206;
	float volumen;
	
	printf("Calculo del volumen que ocupa un gas ideal. Por favor, rellene con los datos.\n");
	
	printf("Moles: ");
	scanf("%f", &mol);	
	
	printf("Temperatura en grados Centigrados: ");
	scanf("%f", &temperatura);
	
	printf("Presion en atmosferas: ");
	scanf("%f", &presion);

	volumen = (mol*R*(temperatura + 273))/presion;
	printf("El volumen del gas segun la Ley de los Gases Ideales es: %f litros" , volumen);	
	
	return 0;
}
