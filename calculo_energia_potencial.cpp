/*
Nombre: Diego Sena
Grupo:Q103
Descripcion: Calculo de la energia potencial
*/
#include<stdio.h>

int main(){
	
	float masa, gravedad, altura, Ep;
	const float g=9.81;
	
	printf("bienvenido a la calculadora de la Energia potencial:\n");
	printf("introduce la masa en kgs\n");
	scanf("%f", &masa);
	printf("introduce el valor de la gravedad (solo dos decimales):\n");
	scanf("%f", &gravedad);
	printf("introduce la altura en metros:\n");
	scanf("%f", &altura);
	
	
	Ep = (masa*gravedad)*altura;
	
	printf("Energia potencial de un cuerpo %f: \n",Ep);
	
	
	
	
	
}
