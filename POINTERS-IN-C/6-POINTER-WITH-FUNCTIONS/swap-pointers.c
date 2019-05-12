#include<stdio.h>

void swap(int *a, int *b); /* declara una funcion cuyos argumentos son apuntadores de tipo int)*/

int main()
{
    int x=4;
    int y=15;

    printf("Programa que intercambia los valores de las variables x,y, usando apuntadores\n");
    printf("a= %d\n", x);
    printf("b= %d\n", y);
    printf("ejecutando swap function ...\n");

    swap(&x,&y);	// pasa como parametros las direcciones de cada variable

    printf("a= %d\n",x);
    printf("b= %d\n",y);
}

void swap(int *a , int *b)	// cada parametro debe ser un apuntador de direccion.
{
    int temp= *b;   /* asignar el contenido de la dirección que apunta *b a la variable temp */
    *b = *a;        /* asignar el contenido de la direccion que apunta a a la variable al apuntador b */
    *a = temp;      /* asignar el contenido de temp al espacio que apunta *a */
}

