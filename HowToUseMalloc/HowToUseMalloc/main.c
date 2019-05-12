//
//  main.c
//  HowToUseMalloc
//
//  Created by Carlos Santiago Cruz on 5/11/19.
//  Copyright © 2019 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int index;
    int totalNumbers;
    int sum=0;
    int sizeReservedSegment;
    int sizeDataTypeInt;
    // declara un apuntador
    int *memoryAddress;
    
    printf("Ingresa el total de numeros:");
    scanf("%d", &totalNumbers);
    
    sizeDataTypeInt=sizeof(int);
    sizeReservedSegment=(totalNumbers)*(sizeDataTypeInt);
    
    printf("Tamaño del tipo dato int es: %d bytes\n",sizeDataTypeInt);
    
    //malloc reserva en memoria el # bytes de la longitud deseada.
    //devuelve un puntero a la zona de memoria concedida
    memoryAddress = malloc(sizeReservedSegment);
    
    
    for(index=0; index<totalNumbers;index++)
    {
        printf("Ingresa un número :");
        scanf("%d",memoryAddress+index);
    }
    for(index=0; index < totalNumbers;index++)
    {
        sum=sum + *(memoryAddress+index);
        printf("la direccion de memoria de %d es: %u \n", *(memoryAddress+index), ((unsigned int)memoryAddress)+index);
    }
    printf("\nla suma de todos los numeros es: %d \n", sum);
    
    return 0;
}
