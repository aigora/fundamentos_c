// NOMBRE: JUAN SANTAMARÍA LILLO 
//MATRÍCULA: 54868
#include<stdio.h>
#include<math.h>
int main()
{
const float a= -9.81;
const float y=0;
 float y0,v0,t;

printf("Calculo de una funcion de una variable de que tiene como ecuacion:\n");
printf("y= y0+v0t+0.5*at^[2]\n");
printf("Siendo la ecuacion de un cuerpo que se encuentra en la cima ");
printf("de un edificio y es soltado/empujado hacia el suelo. \n");
printf("EL valor de a es %.2f \n", a);
printf("Introduzca el valor inicial de y0 para saber ");
printf("la altura del edificio en metros.\n");
scanf("%f", &y0);
printf("Introduzca el valor de la velocidad inicial con la que es ");
printf("arrojado el objeto, en m/s. \n");
scanf("%f", &v0);
printf("El objeto lanzado con una velocidad %.2f m/s,", v0);
printf("lanzado desde un edificio de altura %.2f m\n",y0);
t=sqrt((2*(y-y0-v0*t))/a);
printf("El resultado es %f",t);
printf(" segundos que tardara en llegar al suelo el objeto.");
//  Siendo y0 el valor de la posicion inicial, t el tiempo y a la aceleración.
// Tomamos como constante a, siendo la aceleración de la gravedad,
// tomando 9.81 m/s^2


}
