#include <stdio.h>
int main()
{
        int *ptr, q;
        q = 50;
        
        /* address of q is assigned to ptr */
             
        ptr = &q;
                
        /* display q's value using ptr variable */
        printf("q=%d\n",q);
        printf("la direccion de q es: %p\n", &ptr);
        printf("accesando q con *ptr = %d \n", *ptr);
        return 0;
}

