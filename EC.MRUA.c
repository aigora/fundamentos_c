// Autor: Javier Benavides Muñoz
// Grupo: Q103
//Descripcion: calculadora MRUA


#include<stdio.h>
#include<math.h>

int main(){
	
	int a,b,c,sol1,sol2,sol3,raiz,inr;
	
	printf("Introduzca el valor del termino independiente:\n");
	scanf("%f",&c);
	printf("Introduzca el valor del termino de grado 1:\n");
	scanf("%f",&b);
	printf("Introduzca el valor del termino de grado 2:\n");
	scanf("%f",&a);
	
	inr=(pow(-b,2)-4*a*c);
	raiz=(sqrt(inr));
	
	if(inr<0){
	   printf("No existe solucion real\n");
}
	 else(inr>0);{
	 sol1=((-b)+raiz)/(2*a);
	 sol2=((-b)-raiz)/(2*a);
	 printf("solucion 1: %f\n",sol1);
	 printf("solucion 2: %f\n",sol2);
}

	return 0;
}
