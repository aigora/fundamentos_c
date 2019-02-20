/* autor: javier lopez fernandez
grupo: Q103
descrpcion: este programa calcula e imprime la formula matematica de la fuerza gravitatoria.
*/



#include <stdio.h>
int main() {
    const float G=6.674E-11f; // contante de gravitacion
	float masa1, masa2, distancia, fuerza; //todas las variables 
	printf("puedes calcular la fuerza de atraccion gravitatoria\n"); //texto introductor
	printf("cual es la masa del primer objeto en kg?\n"); //preguntas de todas las masas y las distancias
	scanf("%f",&masa1);
	printf("cual es la masa del segundo objeto en kg?\n");
	scanf("%f",&masa2);
	printf("cual es la distancia que los separa en metros?\n");
	scanf("%f",&distancia);
	fuerza= G*masa1*masa2/(distancia*distancia); //calculo de la fuerza de atraccion mediante la formula
	printf("la fuerza gravitatoria es de %.11f (N)",fuerza); // mostrar el resultado de la formula anterior
	
	
}
