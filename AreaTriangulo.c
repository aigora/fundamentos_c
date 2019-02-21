/*
Nombre: Alberto Díaz-Guerra Fernández
Grupo: Q-203
Descripcion: Calculo del area de un triangulo introduciendo su base y su altura
*/


#include<stdio.h>

int main(){
	
	float b, h, area;
	
	printf("Introduce los valores de la base y la altura para saber el area del triangulo: "); scanf("%f %f", &b, &h);
	
	area= (b*h)/2;
	
	printf("El area es: %.2f",area);
	
	return 0;
}

