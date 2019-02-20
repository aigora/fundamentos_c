/*
Autor:Fernando Casillas Juan
Grupo:Q103
Descripción:Formula Velocidad
*/

#include <stdio.h>
int main () // Función principal de tu programa
{
	
	float velocidad, espacio, tiempo;  

printf("PROGRAMA PARA CALCULAR SI UN OBJETO ES SUPERSONICO O NO\n"); // printf= sirve para imprimir mensajes de texto en la consola.

	 printf("Introduce Espacio (Metros)\n");
	 scanf("%f", &espacio); // scanf=capturar lo que teclea el usuario y asignarlo a una variable.
	
	   printf("Introduce el tiempo (Segundos)\n");
	   scanf("%f", &tiempo); // &=AND binario
	
	velocidad = (espacio/tiempo); // Ecuacion matematica 
	printf("La velocidad es= %.2f m/s\n",velocidad); // .0f=Sacar 0 decimales, solo numeros enteros.
}
