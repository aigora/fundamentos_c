#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define num 0.059

int main()
{
	float pot1, pot2, con1, con2, e1,e2,potcat,potan,potpil;
	printf("Calcule el potencial de una pila segun la ecuacion de Nernst\n");
	printf("Introduzca el potencial inicial del catodo:\n");
	scanf("%f",&pot1);
	printf("Introduzca concentracion del catodo en moles:\n");
	scanf("%f",&con1);
	printf("Introduzca electrones del catodo:\n");
	scanf("%f",&e1);
	potcat=pot1-(num/e1)*(log10f(1/con1));
	//potencial del cátodo guardado en potcat
	printf("Introduzca el potencial del anodo:\n");
	scanf("%f",&pot2);
	printf("Introduzca concentracion del anodo en moles:\n");
	scanf("%f",&con2);
	printf("Introduzca electrones del anodo:\n");
	scanf("%f",&e2);
	potan=pot2-(num/e2)*(log10f(1/con2));
	//potencial del ánodo guardado en potan
	potpil=potcat-potan;
	//El potencial de la pila será el resultado de de restar el ánodo al cátodo
	printf("El potencial de su pila es:\n %.3fV",potpil);
	return 0;
}
