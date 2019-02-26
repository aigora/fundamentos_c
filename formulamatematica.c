//calcular el IVA de un cuaderno, un estuche y una mochila cuyo precio es introducido por el usuario.
//Calcular el IVA total.
//Calcular el precio total de la compra.
//El IVA es el 21%.
#include<stdio.h>
int main()
{
	float preciocuad, ivacuad, precioest, ivaest, preciomoch, ivamoch, IVA, PrecioT ;
	printf("Introduce el precio del cuaderno\n");
	scanf("%f",&preciocuad);
	ivacuad = 0.21*preciocuad;
	printf("El iva del cuaderno es %.2f\n",ivacuad);
	
	printf("Introduce el precio del estuche\n");
	scanf("%f",&precioest);
	ivaest = 0.21*precioest;
	printf("El iva del estuche es %.2f\n",ivaest);
	
	printf("Introduce el precio de la mochila\n");
	scanf("%f",&preciomoch);
	ivamoch = 0.21*preciomoch;
	printf("El iva de la mochila es %.2f\n",ivamoch);
	
	IVA = (ivacuad+ivaest+ivamoch);
	printf("El Iva total es %.2f\n",IVA);
	
	PrecioT = (preciocuad + precioest + preciomoch);
	printf("El precio total de la compra es %.2f\n", PrecioT);
	
	return 0;
}
