#include <stdio.h>
int main()
{
 	
 	 float precio,subtotal,suma;
 	
 	 //precio no se le da valor definido, se introduce por el teclado
 	
 	  printf("Bienvenido a la calculadora del iva\n");
 	
  	  printf("introduzca el precio de su producto con dos decimales\n");
 	
 	  scanf("%f",&precio);
 	
 	  printf("El precio introducido es %.2f euros\n",precio);
 	
 	  subtotal = precio * 0.21;
	
 	  printf("El iva del produzco introducidoes %.2f euros\n",subtotal);
 	
 	  suma = subtotal + precio;
 	
 	  printf("El precio del producto con iva es %.2f euros\n",suma);
 	
 	  return 0 ;
 }
