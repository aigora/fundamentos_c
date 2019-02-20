#include <stdio.h>
#define R 0.082

int main ()

{
	float temperatura, presion, moles, volumen;
	printf("Introduzca la temperatura en grados Kelvin: \n");
	scanf("%f",&temperatura);
	printf("Introduzca la presion en atmosferas: \n");
	scanf("%f",&presion);
	printf("Introduzca el numero de moles: \n");
	scanf("%f",&moles);
	volumen = (temperatura*R*moles)/presion;
	printf("El volumen total es de %.2f litros.",volumen);
	
	return 0;
	
}
