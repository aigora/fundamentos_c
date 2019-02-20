/*Raquel Robledo Sedano
 Q-103
 Descripción: Calcula la velocidad de su coche a partir de la velocidad inicial, final y el tiempo, a parte de pedir otros datos*/

#include <stdio.h>
                      
void  main() {
	//Declaracion de variables
	float tiempo, distanciaF, distanciaI,velocidad;
	int nCaballos;
	char matricula[7];
	char coche;
	 
	//Pedimos los datos
	printf("BIEVENIDO A LA CALCULADORA DE SU VELOCIDAD\n");
	
	printf("Introduzca su marca de coche:\n");
	fflush(stdin);
	scanf("%c",&coche);
	
	printf("Introduzca su matricula:\n");
	fflush(stdin);
    scanf("%s", matricula );
    
    printf("Introduzca su numero de caballos:\n");
    scanf("%i", &nCaballos);
    
    printf("Distancia inicial:");
    scanf("%f",&distanciaI);
    
    printf("Distancia final:");
    scanf("%f",& distanciaF);
    
    printf("Introduzca el tiempo tardado:");
    scanf("%f",&tiempo);
    
    //formula de la velocidad
    
    velocidad=(distanciaF-distanciaI)/tiempo;
    
    //mostrar los datos
    
    printf("El coche %c con el numero de matricula %s y %i caballos ha obtenido la velocidad de: %f km/h",coche,matricula,nCaballos,velocidad);


}

