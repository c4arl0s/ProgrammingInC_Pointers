#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,totalNumeros,suma=0,tamanoSegmentoReservado,tamanoTipoDatoInt; 
    int *direccionMemoria;		// declara un apuntador

	  printf(" Ingresa el total de numeros:");
    scanf("%d", &totalNumeros);

		tamanoTipoDatoInt=sizeof(int);
		tamanoSegmentoReservado=(totalNumeros)*(tamanoTipoDatoInt);

		printf("Tamaño del tipo dato int es: %d bytes\n",tamanoTipoDatoInt);

    direccionMemoria=(int*) malloc(tamanoSegmentoReservado);	//malloc reserva en memoria el # bytes de la longitud deseada.
																						//devuelve un puntero a la zona de memoria concedida
    for(i=0; i<totalNumeros;i++)
    {
        printf("Ingresa un número :");			
        scanf("%d",direccionMemoria+i);										
    }
    for(i=0; i<totalNumeros;i++)
    {
        suma=suma+*(direccionMemoria+i);
				printf("la direccion de memoria de %d es: %u \n", *(direccionMemoria+i), ((unsigned int)direccionMemoria)+i);									
    }
		printf("\nla suma de todos los numeros es: %d \n", suma);
		free(direccionMemoria);
    return 0;
}

