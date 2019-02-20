/* AUTOR: LUCAS GÓMEZ MONTEJANO
GRUPO: Q103
CALCULO DEL METABOLISMO BASAL EN UN HOMBRE 
*/
#include<stdio.h>

int main(){
	
	float peso,altura;
	int edad,TMB;
	
	printf("Vamos a calcular el metabolismo basal de un hombre.\n");
	printf("Indique su peso en kg:\n");scanf("%f",&peso);
	printf("Indique su altura en cm:\n");scanf("%f",&altura);
	printf("Indique su edad:\n");scanf("%i",&edad);
	
	TMB = (10*peso)+(6.25*altura)-(5*edad)+5;

	printf("Tu metabolismo basal es : %i kcal",TMB);
	
	return 0;
}

