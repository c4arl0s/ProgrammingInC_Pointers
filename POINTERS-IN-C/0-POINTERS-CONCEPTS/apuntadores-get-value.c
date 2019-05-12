#include<stdio.h>
#include<stdlib.h>

void obtener_valor(int *mi_apuntador)
{
     *mi_apuntador = 10000;
     return;
}

int main()
{
    int variable;
    obtener_valor(&variable);   /* el argumento de la funcion es la direccion de variable */    
    printf("el valor de variable = %d \n", variable);

}
