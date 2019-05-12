/* Example: Access Array Elements Using Pointers */

#include <stdio.h>

int main()
{
	int	data[5];                        /* In C programming, name of the array always points to address of the first element of an array. */
    int i;

	printf("Enter elements: ");

	for (i = 0; i < 5; ++i)

        scanf("%d", data + i);          

	    printf("You entered: \n");

    for (i = 0; i < 5; ++i)
		
        printf("%d\n", *(data + i));  /* imprime los valores de los elementos de data */

	return 0;
}
