/* MARIA CRUZ BATISTA GIL 
Grupo: Q103
Descripcion: Calculo de moles y gramos, a partir de la formula de gas ideal*/


#include <stdio.h>

int main (){
	
	const float R=0.082;
	
	float presion, volumen, moles, temperatura, P, T, NUM_MASICO, gramos;
	
	
	printf("Calculo de gramos de un elemento quimico \n");
	
	printf("Introduzca el numero masico del elemento:  \n");
	scanf("%f", &NUM_MASICO);

	printf("Introduzca la presion (mmHg):  \n");
	scanf("%f", &presion);
	
	printf("Introduzca el volumen (l):  \n");
	scanf("%f", &volumen);
	
	printf("Introduzca la temperatura (ºC):  \n");
	scanf("%f", &temperatura);
	
	P = presion/760;
	
	T = temperatura + 273;
	
	moles = (P*volumen)/(R*T);
	
	gramos = moles* NUM_MASICO;
	
	printf("Numero de gramos: %.3f", gramos);
	

	return 0;
	
}
