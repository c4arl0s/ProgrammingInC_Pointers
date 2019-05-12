#include <stdio.h>

int main()
{
    int a;
		int *direccionMemoria;  // declaring the variable and pointer

    a = 10;
    direccionMemoria = &a;     // initializing the pointer

    printf("%d \n", *direccionMemoria);    								//esto imprime el valor que apunta
    printf("%d \n", *&a);   															//esto tambien imprime el valor que apunta'
    printf("%u \n", (unsigned int)&a);    								//esto imprime la direccion de a
    printf("%u \n", (unsigned int)direccionMemoria);     	//esto tambien imprime la direccion de a
    printf("%u \n", (unsigned int)&direccionMemoria);    	//esto imprime la direccion de direccionMemoria, osea del apuntador.
    
    return 0;
}