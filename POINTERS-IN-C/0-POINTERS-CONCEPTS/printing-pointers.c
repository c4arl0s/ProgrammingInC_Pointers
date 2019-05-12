 #include <stdio.h>
 #include <stdlib.h>

 int G = 0; /* a global variable, stored in BSS segment */ 
 int	main(int argc, char **argv)
{
       static int s;  /* static local variable, stored in BSS segment */
       int a;         /* automatic variable, stored on stack */
       int *direccionMemoria;        /* pointer variable for malloc below */
     /* obtain a block big enough for one int from the heap */
     direccionMemoria = malloc(sizeof(int));

     printf("&G = %u\n", (unsigned int ) &G);
     printf("&s	= %u\n", (unsigned int ) &s);
     printf("&a	= %u\n", (unsigned int ) &a);
     printf("&p	= %u\n", (unsigned int ) &direccionMemoria);
 		 printf("p  = %u\n", (unsigned int ) direccionMemoria);
     printf("main = %u\n", (unsigned int ) main);

     free(direccionMemoria);

     return 0;
}