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
    int sizeOfIntDataType;
    // declare a pointer to handle the segment reserved of memory
    int *memoryAddressPointer;
    
    printf("Ingresa el total de numeros:");
    scanf("%d", &totalNumbers);
    
    sizeOfIntDataType=sizeof(int);
    sizeReservedSegment=(totalNumbers)*(sizeOfIntDataType);
    
    printf("Tamaño del tipo dato int es: %d bytes\n",sizeOfIntDataType);
    
    //malloc reserva en memoria el # bytes de la longitud deseada.
    //devuelve un puntero a la zona de memoria concedida
    memoryAddressPointer = malloc(sizeReservedSegment);
    
    for(index=0; index<totalNumbers; index++)
    {
        printf("Ingresa un número :");
        scanf("%d",memoryAddressPointer+index);
    }
    for(index=0; index < totalNumbers; index++)
    {
        sum = sum + *(memoryAddressPointer+index);
        printf("la direccion de memoria de %d es: %u \n", *(memoryAddressPointer+index), ((unsigned int)memoryAddressPointer)+index);
    }
    printf("\nla suma de todos los numeros es: %d \n", sum);
    
    return 0;
}
