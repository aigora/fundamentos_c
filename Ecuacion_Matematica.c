/*
AUTOR: ADRIAN MUÑOZ MOLINA
Grupo: Q-103
Descripciom: Formula matematica dado unos datos
*/
#include <stdio.h>

//EMPIEZA EL MAIN
int main() {
	float base, altura, area;

	printf("CALCULA EL AREA DE TU TRIANGULO\n");
	printf("Introduce tu altura en metros:\n");
	scanf("%f", &altura);
	printf("Introduce tu medida de la base en metros:\n");
	scanf("%f", &base); 
	
	area = (base*altura)/2;
	
	printf("Area del triangulo %f m^2", area);  
}
