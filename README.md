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
