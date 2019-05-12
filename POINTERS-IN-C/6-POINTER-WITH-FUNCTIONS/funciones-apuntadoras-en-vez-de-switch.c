// usando funciones apuntadoras en ves de switch
#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int (*oper[4])(int a, int b) = {add, sub, mul, div}; /* funciones apuntadoras */

int main()
{
        int i,result;
        int a=10;
        int b=5;
        printf("Enter the value between 0 and 3 : ");
        scanf("%d",&i);
        result = oper[i](a,b);
				printf("\nResultado = %d \n",result);
				return 0;
}

int add(int i, int j)
{
    return (i+j); 
}
int sub(int i, int j)
{
    return (i-j);
}
int mul(int i, int j)
{
    return (i*j); }
int div(int i, int j)
{
    return (i/j); 
}
