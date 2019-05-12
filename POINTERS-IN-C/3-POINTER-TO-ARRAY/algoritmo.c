/* Example: Access Array Elements Using Pointers */

#include <stdio.h>

int main()
{
	
	int	vector[2];                        /* In C programming, name of the array always points to address of the first element of an array. */
  int k;
	int i;

	printf("Enter elements: ");

	for (i = 0; i <= 2; ++i) {
				printf("\nPrimero llenas valor %d : ", i);
        scanf("%d", vector+i);  
	}        
	    printf("You entered: \n");

    for (i = 0; i <= 2; ++i) {
		
        printf("El valor %d es: %d\n", i, *(vector+i));  /* imprime los valores de los elementos de data */
	}	

}
