//
//  main.c
//  PointerToPointer
//
//  Created by Carlos Santiago Cruz on 5/12/19.
//  Copyright © 2019 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int integerNumber = 10;
    // se declara un apuntador
    int *memoryAddress;
    // se declara un doble apuntador
    int **memoryAddressOfMemoryAddres;
    
    // se inicializa para que direccionMemoria1 apunte a la direccion de numero
    memoryAddress = &integerNumber;
    // se inicializa para que direccionMemoria2 paunte a la direccion de direccionMemoria1
    memoryAddressOfMemoryAddres = &memoryAddress;
    
    printf("Valor de integerNumber = %d \n", integerNumber);
    
    printf("\nvalor disponible en  *memoryAddress = %d \n", *memoryAddress);
    // accesa al valor con *
    printf("valor disponible en  **memoryAddressOfMemoryAddres = %d \n", **memoryAddressOfMemoryAddres);
    
    // accesa al valor con **
    printf("\nla direccion de integerNumber es: %u \n", (unsigned int)&integerNumber);
    
    // imprime la direccion con &
    printf("el valor almacenado en memoryAddress es: %u \n", (unsigned int)memoryAddress);
    
    // accesa al valor con el nombre del apuntador
    printf("\nla direccion de memoryAddress es: %u \n", (unsigned int)&memoryAddress);
    
    // imprime la direccion con &
    printf("el valor almacenado en memoryAddressOfMemoryAddres es: %u \n", (unsigned int)memoryAddressOfMemoryAddres);
    
    // accesa al valor con el nombre del apuntador
    printf("\nFinalmente la direccion de memoryAddressOfMemoryAddres es: %u \n", (unsigned int)&memoryAddressOfMemoryAddres);
    
    return 0;
}
