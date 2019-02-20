/*Autora: Marina Rodríguez Martinez
Grupo: Q-103
Descripcion: Calcular formula 2 Ley de Newton*/

#include<stdio.h>

int main(){
	//VARIABLES
	float masa; //en kg
	float aceleracion; //en ms
	float f;
	
	printf("CALCULADORA DE LA SEGUNDA LEY DE NEWTON\n");
	printf("Introduce su masa en kgs:\n");
	scanf("%f",&masa);
	printf("Introduce su aceleracion en ms:\n");
	scanf("%f",&aceleracion);
	
	f = masa*aceleracion;
	printf("F: %f", f);
	
	return 0;
}
