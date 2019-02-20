
//autor: miguel angel rodrigo garcia
//grupo:q103
//ejercicio de una formula matematica


#include <stdio.h>
#include <math.h>
int main()
{
	//vamos a realizar un programa para hallar la fuerza de coulumb
	float q1,q2,r,E;
	//definimos la constante del campo electrico k
	const float k=9.0e9;
	//pedimos los valores de los datos necesarios con scanf
	printf("intruzca el valor de las cargas q1 y q2 en culombios:\n");
	scanf("%f %f",&q1,&q2);
	//introduciomos ahora la distancia en metros.
	printf("introduzca la distancia que separa las dos cargas:\n");
	scanf("%f",&r);
	//al incluir la biblioteca math.h podemos usar la funcion pow que nos permite
	// elevar numeros.
	E=k*((q1*q2)/pow(r,2));
	
	printf("el valor del campo electrico es %.2f\n",E);
	
	return 0;
	
	
	
}
