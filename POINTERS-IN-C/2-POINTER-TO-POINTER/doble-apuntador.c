#include <stdio.h>

int main()
{
		int	numero = 10;
		int	*direccionMemoria1;		// se declara un apuntador
		int	**direccionMemoria2;	// se declara un doble apuntador
	
    direccionMemoria1 = &numero;    					// se inicializa para que direccionMemoria1 apunte a la direccion de numero
    direccionMemoria2 = &direccionMemoria1;   // se inicializa para que direccionMemoria2 paunte a la direccion de direccionMemoria1
	
    printf("Valor de numero = %d \n", numero);

		printf("\nvalor disponible en  *direccionMemoria1 = %d \n", *direccionMemoria1);									// accesa al valor con *
		printf("valor disponible en  **direccionMemoria2 = %d \n", **direccionMemoria2);									// accesa al valor con **

		printf("\nla direccion de numero es: %u \n", (unsigned int)&numero);															// imprime la direccion con &
		printf("el valor almacenado en direccionMemoria1 es: %u \n", (unsigned int)direccionMemoria1);		// accesa al valor con el nombre del apuntador
		
		printf("\nla direccion de direccionMemoria1 es: %u \n", (unsigned int)&direccionMemoria1);  			// imprime la direccion con &
		printf("el valor almacenado en direccionMemoria2 es: %u \n", (unsigned int)direccionMemoria2);		// accesa al valor con el nombre del apuntador

		printf("\nFinalmente la direccion de direccionMemoria2 es: %u \n", (unsigned int)&direccionMemoria2); // imprime la direccion con & 
		return 0;
}
