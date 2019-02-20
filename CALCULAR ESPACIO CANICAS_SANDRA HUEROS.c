/*Autora: Sandra Hueros Garcia 
Grupo Q-103
Descripcion: Calcular el espacio que ocupan las canicas, volumen esfera 
*/
#include <stdio.h>

int main (){
	
	float radio,volumen,peso; 
	char color [8]; //color de la canica lisa, entera de un color 
	char nombre [20]; //nombre del dueño/a de la canica 
	const float PI = 3.14159;
	
	printf("CUANTO ESPACIO OCUPA MI CANICA\n");
	
	printf("Introduzca el color de la canica:\n");
	scanf("%s", &color);
	
	printf("Introduzca el radio de la canica en milimetros:\n");
	scanf("%f",&radio);
	
	printf("Introduzca el peso de la canica en gramos:\n");
	scanf("%f",&peso);
	
	printf("Introduzca el nombre de la persona que tiene la canica:\n");
	scanf("%s", &nombre); 
	
	volumen = (4/3.0*PI*radio*radio*radio);
	printf("El volumen de la canica de color %s de %s en milimetros cubicos es: %f",color,nombre,volumen);
	
	return 0; 
}
	
	
