#include <stdio.h>

int 
main()
{
	int	x;	                    /* A normal integer */
	int *direccionMemoria;	            /* A pointer to an integer ("*p" is an
				                // integer, so p must be a pointer to an*/
				                /* integer) */

	direccionMemoria = &x;			    /* Read it, "assign the address of x to p" */

	printf("Ingresa una variable de tipo entero: ");
    scanf("%d", &x);                                            /* Put a value in x, we could also use p here */
	printf("El valor de *apuntador= %d\n", *direccionMemoria);	        /* Note the use of the * to get the value */
    printf("El valor de apuntador= %p\n", direccionMemoria);	
    getchar();
}
