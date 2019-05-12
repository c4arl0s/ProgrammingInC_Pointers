#include <stdio.h>

int 
main()
{
	char arr[] = "don't panic\n";
	char *direccionMemoria = arr;

	printf("%c %c\n", arr[6], direccionMemoria[6]);
	printf("%c %c\n", *(arr + 1), *(direccionMemoria + 1));

	return 0;
}
