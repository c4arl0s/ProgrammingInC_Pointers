#include<stdio.h>

int main()
{
		int entero;									// declara un entero
		int *direccionMemoria;			// declara un apuntador

		entero=5;										// inicializamos entero a 5

		direccionMemoria = &entero;	// asignamos la direccion de entero a la del apuntador

		*direccionMemoria += 1;			// incrementamos el entero con el operador *
																// recuerde: al usar el asterisco, accesamos al valor de lo que apunta.

		printf("el valor de entero = %d \n", entero);
		return 0;

}
