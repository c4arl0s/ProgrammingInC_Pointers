#include <stdio.h>
int main()
{
    int variable = 5;
    printf("Valor: %d\n", variable);
    printf("Direccion: %u \n", &variable);  //Notice, the ampersand(&) before var.
    return 0;
}
