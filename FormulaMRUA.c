/*
Autora:Carlota Stocks Galvan
Grupo:Q103
Descripción:Formula mrua
*/
#include <stdio.h>
int main()
{
const float aceleracion = 9.8;
float velocidadinicial;
float tiempo;
float velocidadfinal;

printf("Introduzca velocidad incial(m/s): ");
scanf("%f", &velocidadinicial);
printf("Introduzca el tiempo(s): ");
scanf("%f", &tiempo);

velocidadfinal = velocidadinicial + (aceleracion * tiempo);
printf("La velocidad final es: %.1f (m/s)", velocidadfinal);
}
