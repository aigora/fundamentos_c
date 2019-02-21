/*
autor: Pedro Muñoz Redondo
grupo: Q103
numero matricula: 54121
descripción: calculo de la masa de una tuberia de cobre
*/
#include <stdio.h>
int main()
{
	float radio1,radio2,volumen,pi,masa,densidad,longitud;
	densidad=8.96;
	printf("se desea conocer la cantidad de material empeleado en la construccion de una tuveria de cobre\n");
	printf("la densidad de el material utilizado (Cu) es %f g/cm3\n",densidad);
	printf("introduzca el redio exterior en cm\n");
	scanf("%f",&radio1);
	printf("introduzca el radio interior en cm\n");
	scanf("%f",&radio2);
	printf("introduzca la longitud de la tuberia en cm\n");
	scanf("%f",&longitud);
	pi=3.1415;
	volumen=((longitud*pi)*((radio1*radio1)-(radio2*radio2)))/2;
	masa=(densidad*volumen)/1000;
	printf("la cantidad de material a emplear sera de %f Kg\n",masa);
	return 0;
}
