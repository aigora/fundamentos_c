/* 
Autor: Samuel Cerro Hdez
Grupo: Q103
Descripcion: Este programa imprime el valor de la Fuerza gravitaria acorde a los datos introducidos por el usuario (Masa1,Masa2,d).
*/



#include<stdio.h>
int main(){
	const float G=6.674E-11f;
	float F, Masa1, Masa2, d;
	printf("Ley de gravitacion universal.\n");
	printf("F=G*(Masa1*Masa2)/(d*d)\n");
	printf("Introduzca el valor de Masa1(en kg):");
	scanf("%f", &Masa1);
	printf("Introduzca el valor de Masa2(en kg);");
	scanf("%f", &Masa2);
	printf("Introduzca el valor de d(distancia en metros):");
	scanf("%f", &d);
	F=G*(Masa1*Masa2)/(d*d);
	printf("El valor de la Fuerza gravitatoria es:%.3f\n",(F=G*(Masa1*Masa2)/(d*d)));
	return 0;
}
