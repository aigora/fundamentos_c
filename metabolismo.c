/*Pedro Gonzalez Lozoya
grupo:Q103
Descripcion:Calcular el metabolismo basal de una mujer*/


#include<stdio.h>

int main(){

float peso,altura,TMB;
int edad;
printf("Vamos a calcular el metabolismo basal de una mujer.\n");
printf("Indique su peso (Kg):");scanf("%f",&peso);
printf("Indique su altura (cm):");scanf("%f",&altura);
printf("Indique su edad:");scanf("%i",&edad);

TMB = (10*peso)+(6.25*altura)-(5*edad)-161;

printf("Su metabolismo basal es (TMB):%.2f",TMB);
return 0;
}

