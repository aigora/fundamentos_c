/*
	Autora: Inés Reviejo Vaillo
	Grupo: Q103
	Descripcion: Programa para calcular el area de un triangulo, un circulo y un rectangulo pidiendo al usuario todos los datos.
*/
#include <stdio.h>

int main ()
{
	float PI=3.1416,alturar,baser,radio,alturat,baset;
	float Ar,Ac,At;
	
	
	printf("PROGRAMA PARA CALCULAR EL AREA DE UN TRIANGULO, UN CIRCULO Y UN RECTANGULO. \n");
	printf("Si no desea calcular algun area introduzca 0 en sus valores. \n");
	
	printf("Introduzca la base y la altura del triangulo (en este orden) :\n");
	scanf("%f %f",&baset,&alturat);
	
	At = (baset * alturat)/2;
	
	printf("Introduzca el radio del circulo:\n");
	scanf("%f",&radio);
	
	Ac = PI*radio*radio;
	
	printf("Introduzca la base y la altura del rectangulo (en este orden):\n");
	scanf("%f %f",&baser,&alturar);
	
	Ar = baser * alturar;
	
	printf("El area de cada figura es: \n");
	printf("Area TRIANGULO:  %f \n",At);
	printf("Area CIRCULO:  %f \n",Ac);
	printf("Area RECTANGULO:  %f \n",Ar);
	
	return 0;
}
