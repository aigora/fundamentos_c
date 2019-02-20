/*
Autor: Saúl Leonato Cuervo
Grupo: Q103
Descripción: Este programa calcula la Ley de la Gravitación Universal de Newton
*/

#include <stdio.h>

int main() {
	float F, M, m, d;
	const float G=6.67E-11;
	printf ("Ley de la Gravitacion Universal\n");
	printf ("F=G*(M*m)/(d*d)\n");
	printf("Introduzca el valor de la masa 1(M) en kg:");
	scanf("%f", &M);
	printf("Introduzca el valor de la masa 2(m) en kg;");
	scanf("%f", &m);
	printf("Introduzca el valor de la distancia(d) en metros:");
	scanf("%f", &d);
	F=G*(M*m)/(d*d);
	printf("El valor de la Fuerza gravitatoria es:%.3f\n",(F=G*(M*m)/(d*d)));
	return 0;
}
