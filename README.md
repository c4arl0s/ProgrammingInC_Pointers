<a href="http://www.youtube.com/watch?feature=player_embedded&v=YOUTUBE_VIDEO_ID_HERE
" target="_blank"><img src="http://img.youtube.com/vi/YOUTUBE_VIDEO_ID_HERE/0.jpg" 
alt="IMAGE ALT TEXT HERE" width="240" height="180" border="10" /></a>

# Index

[Advantages of using pointers in C](https://github.com/c4arl0s/ProgrammingInC_Pointers/blob/master/README.md#advantages-of-using-pointers-in-c)

[How pointers work](https://github.com/c4arl0s/ProgrammingInC_Pointers/blob/master/README.md#how-pointers-work)

[Pointer to pointer](https://github.com/c4arl0s/ProgrammingInC_Pointers/blob/master/README.md#pointer-to-pointer)

[Pointer operators](https://github.com/c4arl0s/ProgrammingInC_Pointers/blob/master/README.md#pointer-operators)




# ProgrammingInC_Pointers
ProgrammingInC_Pointers

# Advantages of using pointers in C

Okay. Here are the advantages of pointers as I see it.
1. Pointers allow you to implement sharing without copying i.e. pass by reference v/s pass by copying. This allows a tremendous advantage when you are passing around big arrays as arguments to functions.
2. Pointers allow modifications by a function that is not the creator of the memory i.e. function A can allocate the memory and function C can modify it, without using globals, which is a no-no for safe programming.
- Pointers allow us to use dynamic memory allocation.
- Pointers obviously give us the ability to implement complex data structures like linked lists, trees, etc
- Pointers allow ease of programming, especially when dealing with strings. This is due to the fact that a pointer increment will move by the size of the pointee i.e. easy coding to increment to the next memory location of an array, without worrying about how many bytes to move for each data type. I.e. a pointer to a char will move the pointer by a byte, pointer to an int, by the size of the int, etc NOTE that this is important because you do not have to worry about the size of the data types which can vary on different architectures. 
- Pointers allow us to resize the data structure whenever needed. For example, if you have an array of size 10, it cannot be resized. But, an array created out of malloc and assigned to a pointer can be resized easily by creating a new memory area through malloc and copying the old contents over. This ability is very important in implementing sparse data structures also. 

# Here are some disadvantages of the pointers

Since pointers has many features but there are some disadvantages of pointers

- Failed to protect memory addresses (locations) - Since pointer can access direct memory so memory cannot be protected.
- Uninitialized pointers can cause of segmentation fault.
- Pointers variables are slower than normal variables.
- Pointers always required Free Memory for Dynamically Allocated Memory.

# Pointers and Memory

When a C program is compiled, it works with three types of memory:

1. **Static/Global:**      Statically declared variables are allocated to this type of memory. Global variables also use this region of memory. They are allocated when the program starts and remain in existence until the program terminates. While all functions have access to global variables, the scope of static variables is restricted to their defining func‐ tion.

2. **Automatic:**          These variables are declared within a function and are created when a function is called. Their scope is restricted to the function, and their lifetime is limited to the time the function is executing.

3. **Dynamic:**            Memory is allocated from the heap and can be released as necessary. A pointer references the allocated memory. The scope is limited to the pointer or pointers that reference the memory. It exists until it is released. This is the focus of Chapter 2.

# How pointers work.

Let's assume an 8 bit computer with 8 bit addresses (and thus only 256 bytes of memory). This is part of that memory (the numbers at the top are the addresses):

``` console

  54   55   56   57   58   59   60   61   62   63   64   65   66   67   68   69           ADDRESS
+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+
|    | 58 |    |    | 63 |    | 55 |    |    | h  | e  | l  | l  | o  | \0 |    |         CONTENT
+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+
         cp             c        cpp                                                        VARIABLE NAME  (written in C) 
```


  What you can see here, is that at address 63 the string "hello" starts. So in this case, if this is the only occurrence of "hello" in memory then,
  
``` objective-c
const char *c = "hello";
```

- defines c to be a pointer to the (read-only) string "hello", and thus contains the value 63. 
- c must itself be stored somewhere: in the example above at location 58. Of course we can not only point to characters, but also to other pointers. E.g.:

``` objective-c
const char **cp = &c;
```

Now cp points to c, that is, it contains the address of c (which is 58). We can go even further. Consider:

```objective-c
const char ***cpp = &cp;
```

Now cpp stores the address of cp. So it has value 55 (based on the example above), and you guessed it: it is itself stored at address 60.

# Pointer operators

``` console
Operator        Name                    Meaning
*                                       Used to declare a pointer
*               Dereference             Used to dereference a pointer
->              Point-to                Used to access fields of a structure referenced by a pointer
+               Addition                Used to increment a pointer
-               Subtraction             Used to decrement a pointer
== !=           Equality, inequality    Compares two pointers
> >= < <=       Greater than,           Compares two pointers
                greater than or equal, 
                less than, 
                less than or equal
(data type)     Cast                    To change the type of pointer
```

# Printing the address of a variable

``` c
//  main.c
//  PrintingTheAddressOfaVariable
//
//  Created by Carlos Santiago Cruz on 5/11/19.
//  Copyright © 2019 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int integerVariable=1;
    
    // In C language address operator & is used to determine the address of a variable.
    // The & (immediately preceding a variable name) returns the address of the variable associated with it.
    printf("integerVariable address = %p \n", &integerVariable);
    
    return 0;
}
```

```console
integerVariable address = 0x7ffeefbff41c 
Program ended with exit code: 0
```

// In C language address operator & is used to determine the address of a variable. 
// The & (immediately preceding a variable name) returns the address of the variable associated with it.

# Delcaring and alalysing pointers

``` c
//
//  main.c
//  DeclaringAndAnalysingPointers
//
//  Created by Carlos Santiago Cruz on 5/11/19.
//  Copyright © 2019 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int *chunk;
    
    chunk = malloc(sizeof(int));
    *chunk = 34;
    
    printf("Data stored at *chunk is %d\n", *chunk);
    printf("Address of chunk is %p\n", &chunk);
    printf("Address stored at chunk is %p\n", chunk);
    return 0;
}
```

``` console
Data stored at *chunk is 34
Address of chunk is 0x7ffeefbff418
Address stored at chunk is 0x100604fe0
Program ended with exit code: 0
```

# Reserving size of chunk

``` c
//
//  main.c
//  HowToUseMalloc
//
//  Created by Carlos Santiago Cruz on 5/11/19.
//  Copyright © 2019 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int index;
    int totalNumbers;
    int sum=0;
    int sizeReservedSegment;
    int sizeDataTypeInt;
    // declara un apuntador
    int *memoryAddress;
    
    printf("Ingresa el total de numeros:");
    scanf("%d", &totalNumbers);
    
    sizeDataTypeInt=sizeof(int);
    sizeReservedSegment=(totalNumbers)*(sizeDataTypeInt);
    
    printf("Tamaño del tipo dato int es: %d bytes\n",sizeDataTypeInt);
    
    //malloc reserva en memoria el # bytes de la longitud deseada.
    //devuelve un puntero a la zona de memoria concedida
    memoryAddress = malloc(sizeReservedSegment);
    
    
    for(index=0; index<totalNumbers;index++)
    {
        printf("Ingresa un número :");
        scanf("%d",memoryAddress+index);
    }
    for(index=0; index < totalNumbers;index++)
    {
        sum = sum + *(memoryAddress+index);
        printf("la direccion de memoria de %d es: %u \n", *(memoryAddress+index), ((unsigned int)memoryAddress)+index);
    }
    printf("\nla suma de todos los numeros es: %d \n", sum);
    
    return 0;
}
```


# Printing pointers

``` c
//
//  main.c
//  PrintingPointers
//
//  Created by Carlos Santiago Cruz on 5/11/19.
//  Copyright © 2019 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

/* a global variable, stored in BSS segment */
int globalVariable = 0;

int main(int argc, char **argv)
{
    // static local variable, stored in BSS segment */
    static int staticVariable;
    
    // automatic variable, stored on stack */
    int integerVariable;
    
    // pointer variable for malloc below */
    int *memoryAddress;
    
    // obtain a block big enough for one int from the heap */
    memoryAddress = malloc(sizeof(int));
    
    printf("&globalVariable is allocated in = %u\n", (unsigned int)&globalVariable);
    printf("&staticVariable is allocated in = %u\n", (unsigned int)&staticVariable);
    printf("&integerVariable is allocated in = %u\n", (unsigned int)&integerVariable);
    printf("&direccionMemoria is allocated in = %u\n", (unsigned int)&memoryAddress);
    printf("the value of direccionMemoria is = %u\n", (unsigned int)memoryAddress);
    printf("main is allocated in = %u\n", (unsigned int)main);
    
    free(memoryAddress);
    
    return 0;
}

```

``` console
&globalVariable is allocated in = 4136
&staticVariable is allocated in = 4140
&integerVariable is allocated in = 4022334620
&direccionMemoria is allocated in = 4022334608
the value of direccionMemoria is = 5354912
main is allocated in = 3504
Program ended with exit code: 0
```
# Lets present the values with (unsigned int)

``` objective-c
//
//  main.c
//  PrintingPointers
//
//  Created by Carlos Santiago Cruz on 5/11/19.
//  Copyright © 2019 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

/* a global variable, stored in BSS segment */
int globalVariable = 0;

int main(int argc, char **argv)
{
    // static local variable, stored in BSS segment */
    static int staticVariable;
    
    // automatic variable, stored on stack */
    int integerVariable;
    
    // pointer variable for malloc below */
    int *direccionMemoria;
    
    // obtain a block big enough for one int from the heap */
    direccionMemoria = malloc(sizeof(int));
    
    printf("&globalVariable is allocated in = %u\n", (unsigned int)&globalVariable);
    printf("&staticVariable is allocated in = %u\n", (unsigned int)&staticVariable);
    printf("&integerVariable is allocated in = %u\n", (unsigned int)&integerVariable);
    printf("&direccionMemoria is allocated in = %u\n", (unsigned int)&direccionMemoria);
    printf("direccionMemoria is allocated in = %u\n", (unsigned int)direccionMemoria);
    printf("main is allocated in = %u\n", (unsigned int)main);
    
    free(direccionMemoria);
    
    return 0;
}
```


```console
&globalVariable is allocated in = 4136
&staticVariable is allocated in = 4140
&integerVariable is allocated in = 4022334620
&direccionMemoria is allocated in = 4022334608
direccionMemoria is allocated in = 6395568
main is allocated in = 3504
Program ended with exit code: 0
```


# Why C has Pointers

- C was developed when computers were much less powerful than they are today and being very efficient with speed and memory usage was often not just desirable but vital. The raw ability to work with particular memory locations was obviously a useful option to have. A few tasks these days, such as programming microcontrollers, still need this. However most modern programmers do not need such fine control and the complications of using pointers make programs less clear to understand and
add to the ways in which they can be go wrong. So why are pointers still used so much in C & its successor, C++?

- The reason is that pointers are used to bodge into C some vital features which are missing from the original language: arrays, strings, & writeable function parameters. They can also be used to optimize a program to run faster or use less memory that it would otherwise.

- One of the complications when reading C programs is that a pointer could be being used for any, several or all of these different reasons with little or no distinction in the language so, unless the programmer has put in helpful comments, one has to follow through the program to see what each pointer is used for in order to work out why it is there instead of a plain simple variable.

# Pointer to pointer

Stack overflow answers:

1. Often a pointer to pointer is used when you want to pass to a function a pointer that the function can change.

2. You can use them when you need to return a pointer to some memory on the heap, but not using the return value.

3. Since we can have pointers to int, and pointers to char, and pointers to any structures we've defined, and in fact pointers to any type in C, it shouldn't come as too much of a surprise that we can have pointers to other pointers. If we're used to thinking about simple pointers, and to keeping clear in our minds the distinction between the pointer itself and what it points to, we should be able to think about pointers to pointers, too, although we'll now have to distinguish between the pointer, what it points to, and what the pointer that it points to points to. (And, of course, we might also end up with pointers to pointers to pointers, or pointers to pointers to pointers to pointers, although these rapidly become too esoteric to have any practical use.)

``` c
//
//  main.c
//  PointerToPointer
//
//  Created by Carlos Santiago Cruz on 5/12/19.
//  Copyright © 2019 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int integerNumber = 10;
    // se declara un apuntador
    int *memoryAddress;
    // se declara un doble apuntador
    int **memoryAddressOfMemoryAddres;
    
    // se inicializa para que direccionMemoria1 apunte a la direccion de numero
    memoryAddress = &integerNumber;
    // se inicializa para que direccionMemoria2 paunte a la direccion de direccionMemoria1
    memoryAddressOfMemoryAddres = &memoryAddress;
    
    printf("Valor de integerNumber = %d \n", integerNumber);
    
    printf("\nvalor disponible en  *memoryAddress = %d \n", *memoryAddress);
    // accesa al valor con *
    printf("valor disponible en  **memoryAddressOfMemoryAddres = %d \n", **memoryAddressOfMemoryAddres);
    
    // accesa al valor con **
    printf("\nla direccion de integerNumber es: %u \n", (unsigned int)&integerNumber);
    
    // imprime la direccion con &
    printf("el valor almacenado en memoryAddress es: %u \n", (unsigned int)memoryAddress);
    
    // accesa al valor con el nombre del apuntador
    printf("\nla direccion de memoryAddress es: %u \n", (unsigned int)&memoryAddress);
    
    // imprime la direccion con &
    printf("el valor almacenado en memoryAddressOfMemoryAddres es: %u \n", (unsigned int)memoryAddressOfMemoryAddres);
    
    // accesa al valor con el nombre del apuntador
    printf("\nFinalmente la direccion de memoryAddressOfMemoryAddres es: %u \n", (unsigned int)&memoryAddressOfMemoryAddres);
    
    return 0;
}
```

``` console
Valor de integerNumber = 10 

valor disponible en  *memoryAddress = 10 
valor disponible en  **memoryAddressOfMemoryAddres = 10 

la direccion de integerNumber es: 4022334620 
el valor almacenado en memoryAddress es: 4022334620 

la direccion de memoryAddress es: 4022334608 
el valor almacenado en memoryAddressOfMemoryAddres es: 4022334608 

Finalmente la direccion de memoryAddressOfMemoryAddres es: 4022334600 
Program ended with exit code: 0
```

