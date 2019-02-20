#include<stdio.h>
int main (){
	//Autor: Diego Rodriguez de tapia.
	//Grupo:Q103
	//Descripcion: este progrma calcula con tu peso en la tierra tu masa y tu peso en diferentes planetas. 
	float peso;
	float marte;
	float mercurio;
	float jupiter;
	float luna;
	char nombre;
	float masa;
	
	printf("Bienvenido al calculador de peso interplanetario\n");
	printf("introducir nombre y apellidos:");
	scanf("%d",&nombre);
	fflush(stdin);
	printf("introducir peso (En kilogramos):");
	scanf("%f",&peso);
	masa= peso/9.8;
	printf("Masa: %.2fkg\n",masa);
	luna=peso/1.62;
	printf("Peso en la luna: %.fkg\n",luna);
	marte= masa*3.7;
	printf("Peso en marte: %.fkg\n",marte);
	mercurio= peso/3.7;
	printf("Peso en mercurio: %fkg\n",mercurio);
	jupiter= peso/24.8;
	printf("Peso en jupiter: %fkg\n", jupiter);
	
	return 0;
	
	
}
