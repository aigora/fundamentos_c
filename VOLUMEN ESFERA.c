/* autor: samuel hornsby
grupo: Q103
descrpcion: formula del volumen de la esfera4*/




#include<stdio.h>
#include<math.h>
int main() {
const float PI=3.141592;
printf("BIENVENIDO A LA CALCULADORA DE VOLUMENES PARA ESFERAS\n");
system("PAUSE\n");
float r,v;
printf("Introduce el radio de la esfera en metros:\n");
scanf("%f",&r);
v=(4/3)*PI*r*r*r;
printf("El volumen de su esfera es el siguiente:%.2f m3\n",v);
system("PAUSE\n");
return 0;	
}
