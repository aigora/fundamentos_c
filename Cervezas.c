/* 
Autor: Miguel Valiente Alfageme
Grupo: Q-103
Descripción: Calculamos el precio maximo de la unidad de cerveza del
 mismo valor por el que se puede comprar una cantidad de cervezas introducidas
  por el usuario en base al sueldo introducido por el usuario, suponiendo que te
   gastas el 75% del sueldo en gastos varios y el 10% se lo queda hacienda*/
   
#include <stdio.h>
int main()
{
	
	float sueldo, impuestos, gastos, precio;
	float cantidad;
	printf("Introduce el sueldo mensual bruto: ");
	scanf("%f", &sueldo);
	printf("Cuantas cervezas tomas en un mes?: ");
	scanf("%f", &cantidad);
	precio= (sueldo-sueldo*0.15-sueldo*0.75)/cantidad;
	printf("Puedes comprar %0.f cervezas, si cada cerveza cuesta como maximo %.2f euros", cantidad, precio);
	
	
	return 0;
}
