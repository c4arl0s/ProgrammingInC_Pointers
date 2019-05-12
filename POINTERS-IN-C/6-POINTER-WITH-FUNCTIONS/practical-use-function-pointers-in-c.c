#include <stdio.h>
int	add(int a, int b);
int	sub(int a, int b);
int	mul(int a, int b);
int	div(int a, int b);

// Function pointers are mainly used to reduce the complexity of switch statement. Example with switch statement:
int main()
{
	int	i, result;
	int	a = 10;
	int	b = 5;

    printf("Enter the value between 0 and 3 : ");
	scanf("%d", &i);
// Function pointers are mainly used to reduce the complexity of switch statement. Example with switch statement:
    switch (i) 
    {
	case 0:
		result = add(a, b);
        printf("\nResult= %d \n", result);
		break;
	case 1:
		result = sub(a, b);	
        printf("\nResult= %d \n", result);
        break;
	case 2:
		result = mul(a, b);
        printf("\nResult= %d \n", result);
		break;
	case 3:
		result = div(a, b);
        printf("\nResult= %d \n", result);
		break;
	}
}
int add(int i, int j)
{
	return (i + j);
}
int sub(int i, int j)
{
	return (i - j);
}
int mul(int i, int j)
{
	return (i * j);
}
int div(int i, int j)
{
	return (i / j);
}
