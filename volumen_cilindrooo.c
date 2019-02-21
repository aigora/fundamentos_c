// Carmen Mourelle Jarillo 54119

#include <stdio.h>
#define pi 3.14159
int main(){
	float r,h,v;
	printf("Para hallar el volumen de un cilindro da valores a los siguientes parametros\n");
	printf("Introduce el radio (m) del cilindro: ");
	scanf("%f",&r);
	printf("Introduce la altura(m) del cilindro: ");
	scanf("%f",&h);
	v=pi*r*r*h;
	printf("el volumen del cilindro es: %.3f m^3",v);
	return 0;
}
