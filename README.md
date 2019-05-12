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

