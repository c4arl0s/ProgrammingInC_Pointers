//
//  main.c
//  PrintingPointers
//
//  Created by Carlos Santiago Cruz on 5/11/19.
//  Copyright © 2019 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

/* a global variable, stored in BSS segment */
int globalVariable = 0;

int main(int argc, char **argv)
{
    // static local variable, stored in BSS segment */
    static int staticVariable;
    
    // automatic variable, stored on stack */
    int integerVariable;
    
    // pointer variable for malloc below */
    int *memoryAddress;
    
    // obtain a block big enough for one int from the heap */
    memoryAddress = malloc(sizeof(int));
    
    printf("&globalVariable is allocated in = %u\n", (unsigned int)&globalVariable);
    printf("&staticVariable is allocated in = %u\n", (unsigned int)&staticVariable);
    printf("&integerVariable is allocated in = %u\n", (unsigned int)&integerVariable);
    printf("&direccionMemoria is allocated in = %u\n", (unsigned int)&memoryAddress);
    printf("the value of direccionMemoria is = %u\n", (unsigned int)memoryAddress);
    printf("main is allocated in = %u\n", (unsigned int)main);
    
    free(memoryAddress);
    
    return 0;
}
