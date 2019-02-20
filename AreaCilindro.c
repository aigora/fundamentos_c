/*
Nombre:Marcos Calderón Jimeno
Grupo Q203
Descripcion: Calculo del volumen de un cilindro
*/
#include <stdio.h>
#include<math.h>
#define Pi 3.1415
int main()
{
	float radio,h;
	float res;
	printf("Este programa te calculara el volumen de un cilindro \n");
	printf("Introduzca el valor del radio:\n");
	scanf("%f",&radio);
	printf("Introduzca el valor de la altura:\n");
	scanf("%f",&h);
	res = Pi*(pow(radio,2))*h;
	printf("EL volumen del cilindro para radio %.2f y altura %.2f es: %.2f\n",radio,h,res);
}
