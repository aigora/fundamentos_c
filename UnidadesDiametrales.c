/*Autor: Ivan Herranz
Grupo:Q103
Descripción: El programa te permiter hacer trasformacioón de unidades entre las principqles unidades de calibre diametral*/

#include<stdio.h>

int main(){
	//Declaración y asignacion de variables
	float cal, mm, pulg;
	
	//Funcionalidades
	
	printf("El siguiente programam le permitirá realizar el paso de medidas mm a pulgadas y su calibre\n");
	printf("Introduzca la medida que desea transformar");
	scanf("%f",&mm);
	pulg = mm/25.4;
	cal = pulg*100;
	printf("Su medida en pulgadas sería = %.2f inch y tendría un calibre diametral de: %.1f",pulg,cal);
	return(0);
}
