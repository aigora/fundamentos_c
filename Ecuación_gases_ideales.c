/*
NOMBRE: ÁLVARO MITA CHUNGARA
GRUPO: Q103
DESCRIPCIÓN: CALCULAR LA PRESION DE UN GAS IDEAL
*/
// presion de un gas ideal
#include<stdio.h>
void main(){
	int moles;
	float temp,vol,r,h,p;
	const float R = 8.31, pi=3.14;
	printf("\n Determine la presion de un gas ideal en un cilindro cerrado segun los parametros: volumen, temperatura y moles ");
	printf("\n Introduzca el radio de la base del cilindro(mm)?: ");
	scanf("%f",&r);
	printf("\n Introduzca la altura del cilindro(mm): ");
	scanf("%f",&h);
	printf("\n Introduzca la temperatura (ºC): ");
	scanf("%f",&temp);
	h/=1000;
	r/=1000;
	temp += 273;
	printf("\n Introduzca los moles del gas: ");
	scanf("%d",&moles);
	vol = (r*r)*pi*h;
	p=(moles*R*temp)/vol;
	printf("\n La presion del gas es: %.4f Pascales",p);
}
