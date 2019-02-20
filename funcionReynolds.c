/*Paula Alejandra Mantilla Ruiz	
codigo: Q103
Descripcion: Calcula el numero de reynoldsde cualquier fluido a partir de los datos introducidos por el usuario */

#include <stdio.h>
//Formula matematica para calcular el numero de Reynolds
//Inicializamos el programa con int main ()
int  main() {
float viscosidad,diametro_tuberia,densidad,velocidad ,Reynolds;
 char letra[20];
 printf("Introduzca el nombre del fluido del que quiera calcular el numero de Reynolds:\n");
 scanf("%s",&letra);
 fflush(stdin);
 printf("Bienvenido al programa que calcula el numero de Reynolds\n");
 printf("Por favor , introduzca el diametro de la tuberia en metros :\n");
 scanf("%f",&diametro_tuberia);
 printf("Por favor , introduzca la densidad del fluido en kg/m3 :\n");
 scanf("%f",&densidad);
 printf("Por favor , introduzca la viscosidad del fluido kg/m.s :\n");
 scanf("%f",&viscosidad);
 printf("Por favor , introduzca la velocidad del fluido m/s :\n");
 scanf("%f",&velocidad);
 Reynolds=(velocidad*diametro_tuberia*densidad)/viscosidad;
//Resultado
printf("El numero de Reynolds para el fluido %s es : %.2f",letra,Reynolds);
 
}
