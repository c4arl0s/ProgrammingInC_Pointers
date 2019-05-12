				/* Ejercicio 2: Escribe un programa que de un
				 * valor a una variable. Esta sea apuntada
				 * por un puntero y sumarle 3 a trav√©s del
				 * puntero. Luego imprimir el resultado. */

#include <stdio.h>

int main()
{
	int	a;  /* se declara una variable a de tipo entero */
	int *b; /* se declara un apuntador llamado b */

	a = 5;      /* asignamos el valor de 5 a a */
	b = &a;     /*inicializamos el apuntador b a la direcion de la variable a */
	*b += 3;    /* incrementamos el valor de lo que apunta b en 3 unidades */

	printf("El valor de a es = %i\n", a);
}
/* Tambi √ ©n se pod √ ≠a haber hecho:printf("El valor de a es = %i\n", *b); */
