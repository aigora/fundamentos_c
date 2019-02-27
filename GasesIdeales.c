//Marina Polo Q103
//Descripción: este programa calcula la presión de un gas conociendo la constante de los gases ideales, la temperatura, el volumen y los moles de dicho gas.

#include<stdio.h>
#include<math.h>

int main() {
    float presion, volumen, moles, R, temperatura;
    printf("Indicar numero de moles");
    scanf("%f",&moles);
    
    printf("Introducir constante de los gases ideales"); //expresar en atm*L/K*mol
    scanf("%f",&R);
    
    printf("Proponer una temperatura en grados Kelvin"); scanf("%f",&temperatura);
    printf("Indicar volumen del recipiente expresado en L"); scanf("%f",&volumen);
    presion=((moles*R*temperatura)/(volumen));
    
    printf("La presion segun los datos obtenidos es;%f",presion);
    return 0;
}
