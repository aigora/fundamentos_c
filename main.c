//
//  main.c
//  formula matematica tarea
//
//  Created by Jaime casas on 8/2/19.
//  Copyright © 2019 Jaime casas. All rights reserved.
//

#include <stdio.h>



int main(int argc, const char * argv[]) {
    printf("Bienvenido a la calculadora de caida libre\n");
    const float aceleracion=9.8;
    float velocidad;
    float tiempo;
    float recorrido;
   // printf("introduce la velocidad(m/s)\n");
    //scanf("%f",&velocidad);
    printf("introduce el tiempo en segundos\n");
    scanf("%f" ,&tiempo);
    //recorrido=velocidad*tiempo+((aceleracion*tiempo*tiempo)/2);
    recorrido=(aceleracion*tiempo*tiempo)/2;
    printf("El recorrido es:%f metros\n",recorrido);
    return 0;
}
