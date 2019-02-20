#include <stdio.h>
#include <math.h>
int main ()
{ float masa, altura,velc  ,g=9.81,enPon, enCin , enMec ;
 printf( " Introduzca la masa (kg) , la altura  (m) , velocidad (m/s)\n");
 scanf ( " %f %f %f" , &masa , &altura, &velc);
 enPon= masa*g*altura ;
 enCin= 1.0/2.0* masa * pow(velc, 2);
 enMec= enCin + enPon;
 printf( "La energia potencial es : %f J", enPon);
 printf (" La energia cinetica es :%f J ", enCin);
 printf( " La nergia mecanica es: %f J ", enMec) ;
 
}

