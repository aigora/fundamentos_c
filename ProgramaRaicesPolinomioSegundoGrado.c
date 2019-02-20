/*Autora: Andrea Fernández Ortiz 
Grupo: Q103
Descripcion:programa que imprime las raices de un polinomio de segundo grado, introduciendo los valores de a, b y c
*/

#include <stdio.h>
int main ()
{
	
	int a,b,c;
	float X1, X2, X3;
	
printf("Introduce a\n");
	scanf("%d", &a);
	printf("\n");
	printf("Introduce b\n");
	scanf("%d", &b);
	printf("\n");
	printf("Introduce c\n");
	scanf("%d", &c);
	printf("\n");

X1 = (-b+(sqrt(b*b-4*a*c)))/(2*a);
X2 = (-b-(sqrt(b*b-4*a*c)))/(2*a);
X3= (b*b-4*a*c);
if (X3 < 0) 
printf ("No hay raices");
else
{
printf(" %.4f Primera solucion\n",X1);
printf(" %.4f Segunda solucion\n",X2);
}
}
