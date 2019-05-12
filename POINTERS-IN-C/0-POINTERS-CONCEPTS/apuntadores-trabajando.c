/* Source code to demonstrate, handling of pointers in C program */
#include <stdio.h>
int 
main()
{

	int	c;
	int *apuntador_a_c;
	
    c = 22;

    printf("=============================\n");
    printf("Address of c:   %u  \n", &c);
	printf("Value of c:     %d  \n\n", c);
	
    apuntador_a_c = &c;
	
    printf("Address of pointer pc:  %u  \n", apuntador_a_c);
	printf("Content of pointer pc:  %d  \n\n", *apuntador_a_c);
	
    
    printf("Ahora c= 11 \n");

    c = 11;
	
    printf("Address of pointer pc:%u\n", apuntador_a_c);
	printf("Content of pointer pc:%d\n\n", *apuntador_a_c);
	
    printf("inicialicemos el apuntador a c con el valor 2,  *apuntador_a_c=2 \n");
    
    *apuntador_a_c = 2;
	
    printf("Address of c:   %u  \n", &c);
	printf("Value of c:     %d  \n", c);
	printf("============================= \n");
    return 0;
}
