//
//  main.c
//  PrintingTheAddressOfaVariable
//
//  Created by Carlos Santiago Cruz on 5/11/19.
//  Copyright © 2019 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int integerVariable=1;
    
    // In C language address operator & is used to determine the address of a variable.
    // The & (immediately preceding a variable name) returns the address of the variable associated with it.
    printf("integerVariable address = %p \n", &integerVariable);
    
    return 0;
}
