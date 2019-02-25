/*ANDREA BLAS MURILLO 
Q-103 
DEscripción:Calculadora de la ecuacion de einstein*/

//Ecuacion de Einstein: E=m*c^2
#include <stdio.h>


int main(){

float E, masa, velocidad;

printf("Te damos la bienvenida a la calculadora de la energia\n");

printf("Introduce una masa (kg): \n");
scanf("%f", &masa);

printf("Introduce una velocidad (metros*segundo^-1): \n");
scanf("%f", &velocidad);

E= masa*(velocidad*velocidad);

printf("La energia de un cuerpo %.1f", E;

return 0;


}
