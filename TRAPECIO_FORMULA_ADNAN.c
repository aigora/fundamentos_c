/* AUTOR: AADNAN TALIB RIZQUI 
 GRUPO: Q103
 DESCRIPCION: CALCULO AREA TRAPECIO*/

#include<stdio.h>

int main(){
	
// DEFINICION DE VARIABLES

float arriba,abajo,h,a;
char nombre [20];

// SECUENCIA PARA PEDIR DATOS

printf("***HOLA, BIENVENIDO AL PROGRAMA PARA CALCULAR EL AREA DE UN TRAPECIO***\n\n-Como te llamas?:  ");
scanf("%s",nombre);

fflush(stdin);
printf("\n%s Introduce la medida en cm del lado superior del trapecio: ",nombre);
scanf("%f",&arriba);

printf("\nBien %s, ahora introduce la medida del lado inferior otra vez en cm: ",nombre);
scanf("%f",&abajo);

printf("\nEl siguiente paso es introducir la altura del trapecio, tambien en cm %s: ",nombre);
scanf("%f",&h);

//FORMULA 

a = ((arriba+abajo)/2.0)*h;

//RESULTADO

printf("\nFinalmente %s aqui tienes el area de tu trapecio en cm^2: %.2f",nombre,a);

printf("\n\n  GRACIAS POR USAR ESTE PROGRAMA!");

}
