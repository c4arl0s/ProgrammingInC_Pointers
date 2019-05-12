#include<stdio.h>

int main()
{
	int     *pc;    /* se declara un apuntador de tipo entero */
	int	      c;    /* se declara una variable de tipo entero */

	c = 22;         /* se asigna el valor de 22 a la variable entera c */

	printf("Address of c: %u \n", &c);
	printf("Value of c: %d \n\n", c);
	
    pc = &c;    /* pc apunta a la direccion de c */

	printf("Address of pointer pc: %p \n", pc);
	printf("Content of pointer pc: %d \n\n", *pc);
	
    c = 11;

    printf("se asigna c=11\n");

	printf("Address of pointer pc: %p \n", pc);
	printf("Content of pointer pc: %d \n\n", *pc);
	
    *pc = 2;
	
    printf("Address of c: %u \n", &c);
	printf("Value of c: %d \n\n", c);
	
    return 0;
}
