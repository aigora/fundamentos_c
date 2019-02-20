#include <stdio.h>
int main()
{
	float area, lado,apotema;
	printf("Calculadora de área del pentagono regular\n");
	printf("Introduce el valor del lado del pentágono en cm:\n");
	scanf("%f",&lado);
	
	printf("Introduce el valor del apotema del pentágono en cm:\n");
	scanf("%f",&apotema);
	
	area=(5*lado*apotema)/(2);
	printf("El área del pentágono con los datos introducidos es el siguiente:%.2f\n",area,lado,apotema);
	return 0;
	
}
