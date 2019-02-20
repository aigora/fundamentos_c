
/* 
Autora:Wasima Simouh
Grupo: Q103
Descripción: Problema  usandos 'Ley de los gases ideales'
*/

#include<stdio.h>
int main()
{
	printf("Calcular el volumen de 6.4 moles de un gas a 210 grados sometido a 3 atmosferas de presion.\n");
	printf("Es suficiente ese volumen para llenar un deposito de 50 litros?\n");
	const float R=0.082;
	float P, V, n, T;
	
	printf("introduzca los moles de nuestro gas:\n");
	scanf("%f", &n);
	
	//T(Kelvin)=T(grados)+273
	printf("Bien, ahora introduzca la temperatura en Kelvin:\n");
	scanf("%f", &T);
	
	printf("Por ultimo, introduce la presion en atmosferas:\n");
	scanf("%f", &P);
	
	V=(n*R*T)/P;
	printf("El volumen del gas es %.2f litros.\n", V);
	
	printf("El volumen obtenido es %s",(V>=50)?"suficiente":"insuficiente");
	
	return 0;
	
	 
}
