/*
Autor: Sergio Torres Madrazo
Grupo: Q103
Descripción:Cálculo de la longitud de una circunferencia, area de un círculo y volumen de una esfera a partir de un radio.
*/

#include<stdio.h>
#include<math.h>

int main(){

	float radio, long_circunferencia, area_circulo, vol_esfera, PI;
	PI=3.141592; //asignamos a PI su valor con 6 decimales
	
	printf("Este programa calcula a partir del RADIO :\n\n"); 
	printf("\t1: La Longitud de una circunferencia:\n"); 
	printf("\t2: El Area del circulo:\n");
	printf("\t3: El Volumen de la esfera:\n");
	
	printf("\n\nTeclee el radio (en metros): "); 
	scanf("%f",&radio);
	
	long_circunferencia = 2 * PI * radio;
	area_circulo = PI * radio * radio;
	vol_esfera= (4 * PI * pow (radio,3))/3;
	
	printf("\n\t1: Longitud de la circunferencia: %.2f m",long_circunferencia);
	printf("\n\t2: Area del circilo: %.2f m2",area_circulo);
	printf("\n\t3: Volumen de la esfera: %.2f m3",vol_esfera);
	
	return 0;
}
