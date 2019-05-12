#include <stdio.h>
#include <string.h>

int main()
{
	char cadena[] = "98181374:0142-A-20,0-FF-PV-NM85-120/60-05*:642:USD:B:";
	char *direccionMemoria;
	int	espacios=0, dos_puntos=0;
    char item_burkert[9];
	int indice=0;
    
    direccionMemoria = cadena; // el nombre del arreglo es un apuntador al primer elemento, es por eso que lo podemos igualar al apuntador direccionMemoria
    
    while (*direccionMemoria != ':')
    {
        item_burkert[indice]=*direccionMemoria;
        indice++;
        direccionMemoria++;
    } 
	printf("En la cadena \"%s\" se almacena el item burkert \n", item_burkert);
}
