#include<stdio.h>

main()
{
    int a=1;
    int *apunta_a=&a;

    printf(" The value a is: %d \n", a); 
    printf(" The value of a is also: %d \n", *apunta_a);

    /* ahora cambiemos la variable a */

    printf(" ahora cambiemos el valor de la variable a --> ");

    ++*apunta_a;

    printf(" The value a now is: %d \n", a);
    printf(" the valor de apunta_a es: %p \n", apunta_a);
}

