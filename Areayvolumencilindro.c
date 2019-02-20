/*
Autora: Rosa Silverio Guzman
Grupo :Q103
Descripción: Calculo del volumen y area de un cilindro
*/

#include<stdio.h>
#include<math.h>

int main()
{
	
	float h,r,v,a;
	float pi=3.1415192;
	printf("Introduce la altura y radio de un cilindro\n");
	scanf("%f %f",&h,&r);
	a=2*pi*r*(h+r);
	v=pi*h*pow(r,2);
	printf("El area es %.4f y el volumen es %.4f",a,v);

	
	return 0;
}
