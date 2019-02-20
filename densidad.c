#include <stdio.h>
//empieza el main
/*
Autor:Diego Alarcon
Grupo:Q103
*/
int main() {
	//VARIABLES
	float masa, volumen, densidad;//Masa en gr y volumen en cm3


printf("Bienvenido, este programa calcula la densidad de un cuerpo con una masa y volumnen determinado.  \n");

 printf("Itroduzca la masa del cuerpo(en gramos)\n");
scanf("%f", &masa);

 printf("Ahora indique su volumen(en centimetros cubicos)\n");
 scanf("%f", &volumen);
 
 densidad=masa/volumen;

	printf("La densidad de el objeto es: %.2f\n", densidad);

}

