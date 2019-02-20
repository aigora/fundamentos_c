//Autor: David Ledesma Gonzalez 
//Grupo: Ingeniería química

#include <stdio.h>

void main()
{   
  
 	float masaO,masaM,densidadO,densidadM,n,r;
 	printf("CALCULO DE LA RELACION DE PILLING-BETWORTH\n");
	printf("Introduzca masa atomica del oxido (gramos/mol):");
	scanf("%f", &masaO);
	printf("Introduzca densidad del metal (gramos/litros):");
	scanf("%f", &densidadM);
	printf("Introduzca masa atomica del metal (gramos/mol):");
	scanf("%f", &masaM);
	printf("Introduzca densidad del oxido (gramos/litros):");
	scanf("%f", &densidadO);
	printf("Introduzca numero de atomos del metal por molecula de oxido:");
	scanf("%f", &n);
	
	r=(masaO*densidadM)/(masaM*densidadO*n);
	
	printf("Relacion de Pilling-Bedworth=%f", r);
	
}
