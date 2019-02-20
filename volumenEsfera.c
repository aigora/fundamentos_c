/*Tomás Alda
Grupo Q103
Descripción: este programa calcula el volumen de una esfera.
*/



#include <stdio.h>
#include <math.h>
int main(){
float r,v,PI;
PI=3.141592;

printf ("intoduzca el radio:\n\n");
scanf("%f",&r);
v=4*PI*pow(r,3)/3;
printf("%f",v);
return 0;
}
