/* Autora: Hanan El Boudakhani Ballafkih
 nº54576
 grupo: Q103
 Descripcion: Calcular mediante datos La ley de Gibbs pidiendo los electrones y la fuerza electromotriz */
#include <stdio.h>
#include <math.h>
#define constante 96500

int main(){
	int electrones;
	float fuerza,gibbs;
	
	printf("Introduce numero de electrones\n");
	scanf("%i",&electrones);

	printf("Ahora introduce la fuerza electromotriz de la pila\n");
	scanf("%f",&fuerza);
	
	gibbs=(-1)*electrones*fuerza*constante;
	printf("resultado %.2f",gibbs);
	return(0);
	
}
