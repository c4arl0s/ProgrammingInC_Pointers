#include<stdio.h>
#include<stdlib.h>


void obtener_valor(int *direcionMemoria);		// se declara prototipo de funcion

int main()
{
    int variable;																					// se declara un entero

    obtener_valor(&variable);   													// el argumento de la funcion es la direccion de variable */    
    printf("el valor de variable = %d \n", variable);			// imprime valor de variable

}

void obtener_valor(int *direccionMemoria)									// declara en el argumento un apuntador de tipo int 
{
	*direccionMemoria = 1000;
	return;
}
