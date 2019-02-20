#include <stdio.h>
#include <math.h>

// AUTOR: Iker Gorospe Mateos
// GRUPO: Q103
// Este programa te calcula la fuerza eléctrica.




int main(){
	
	double c,q1,q2,r,F;
	c=9e9;
	
	printf("Programa para calcular la fuerza electrica.\n\n");
	
	printf("Deme 2 cargas para la fuerza en Culombios.\n\n");
    printf("Y la distancia entre las cargas en metros.\n\n");
	scanf("%lf" "%lf" "%lf",&q1,&q2,&r);
	
    F = c*(q1*q2)/(pow(r,2));
    
	printf("La fuerza entre las cargas es: %lf N.\n\n",F);

} 
	 
	 



