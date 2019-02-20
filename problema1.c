#include <stdio.h>
#include <string.h>

int main(){

float radio,altura,volumen;//radio altura y voluen de la lata
char marca[10]; //la marca que vende dicha lata
const float pi=3.14159;
      printf("Bienvenido al medidor de latas:\n");;
      printf("Introduzca la marca de la lata en mayusculas:\n");
      fflush(stdin);
      scanf("%s",&marca);
      printf("Introduzca la altura de la lata en cm:\n");
      fflush(stdin);
      scanf("%f",&altura);
      printf("Ahora introduzca el radio de la lata tambien en cm:\n");
      fflush(stdin);
      scanf("%f",&radio);
      volumen=pi*(radio*radio)*altura;
      printf("El volumen de la lata de %s en ml es de: %.1f ",marca,volumen);
return 0;
}


