#include<stdio.h>

int main()
{
		int a=1;
		int *direccionMemoria;	// declarando un apuntador

		direccionMemoria=&a;		// asignando apuntador a direccion de variable tipo int a

		printf("\nDireccion de a = %u \n", (unsigned int)direccionMemoria);	// se imprime la direccion guardad en el apuntador
		printf("\nEl valor de a = %d \n", *direccionMemoria);								// se imprime el valor al que apunta el apuntador
}