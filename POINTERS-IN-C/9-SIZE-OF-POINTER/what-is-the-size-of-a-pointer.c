#include<stdio.h>

int main()
{
	int	a;  				
	int *direccionMemoria; 	

	direccionMemoria=&a;
	a = 5;      

	printf("El tamaño del apuntador es = %lu bytes \n", sizeof(direccionMemoria));
}
