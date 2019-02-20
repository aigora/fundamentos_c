/*autora: Covadonga González Gonzálezç
grupo:Q103
descripcion:este programa imprime la fórmula del volumen de una esfera
*/

#include<stdio.h>
int main(){
	const float pi= 3.141592;
	float radio, volumen;
	
	printf("introduzca radio en metros:\n");
	scanf("%f", &radio);
	
	volumen=(4/3)*pi*radio*radio*radio;
	printf("el volumen es: %f \n", volumen);
}
