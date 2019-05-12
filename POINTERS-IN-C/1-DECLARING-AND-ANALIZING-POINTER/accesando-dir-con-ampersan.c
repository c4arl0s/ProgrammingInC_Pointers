#include<stdio.h>

int main()
{
	int a=1;

	printf("imprimiendo direccion de a = %u \n", (unsigned int)&a);
	return 0;

}

// In C language address operator & is used to determine the address of a variable. 
// The & (immediately preceding a variable name) returns the address of the variable associated with it.