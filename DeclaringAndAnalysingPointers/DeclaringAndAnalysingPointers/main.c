//
//  main.c
//  DeclaringAndAnalysingPointers
//
//  Created by Carlos Santiago Cruz on 5/11/19.
//  Copyright © 2019 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int *chunk;
    
    chunk = malloc(sizeof(int));
    *chunk = 34;
    
    printf("Data stored at *chunk is %d\n", *chunk);
    printf("Address of chunk is %p\n", &chunk);
    printf("Address stored at chunk is %p\n", chunk);
    return 0;
}
