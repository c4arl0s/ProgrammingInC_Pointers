#include <stdio.h>

int main()
{
	int	i;
	int	temp[24];

	for (i = 0; i < 24; i++) {
		printf("La dirección del elemento %i es %p.\n", i, &temp[i]);
	}
}
