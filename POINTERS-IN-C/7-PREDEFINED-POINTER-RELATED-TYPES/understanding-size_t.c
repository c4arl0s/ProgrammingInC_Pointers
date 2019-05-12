// Consider the following example, where we define a variable as a size_t and then display it using two different format specifiers:
// Created to provide a safe type for sizes

#include<stdio.h>
#include<stdlib.h>

int main()
{
size_t sizet = -5;
 
printf(" %d \n",(unsigned int)sizet); 
printf(" %zu \n",sizet);
}