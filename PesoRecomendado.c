#include <stdio.h>
#include <stdlib.h>


//Peso recomendado = (Altura en centímetros – 100 + diez por ciento de la edad) · 0.9

int main(int argc, char *argv[])
{
  float altura;
  int edad;
  float peso_recomendado;
  printf ("Introduzca la altura en centimetros");
  scanf ("%f", &altura);
  printf ("Introduzca la edad");
  scanf ("%d", &edad);
  peso_recomendado=(altura-100 + edad*0.1)*0.9;
  printf ("El peso recomendado es %f",peso_recomendado);
  system("PAUSE");	
  return 0;
}
