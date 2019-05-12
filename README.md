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

Well, that is all I can think of.

While I was in college, a friend of mine complained that he was confused while programming in C, struggling to learn the syntax for pointers.

He gave the example of something like: *x=**p++ being ugly and unreadable, with too many operations layered on each other, making it hard to tell what was happening.  He said he had done a bit of programming with assembly language, but he wasn't accustomed to the nuances of C.

I wrote the following explanation on our student message board, and I got a lot of good feedback.  Some people said that they had been programming in C for years, but not until they read my post did they finally understand pointers.  So here it is, unearthed from my backups and slightly edited.  I hope it helps someone again...

Message 1956 (8 left): Thu Jan 25 1990  2:44am
From: Bill! (easterb@ucscb)
Subject: Okay


Well, if you know assembly, you have a head start on many of the cis freshpersons here.  You at least know about memory maps:  RAM is a long long array of bytes. It helped me to learn about pointers if I kept this in mind. For some reason, books and instructors talking about pointers want to overlook this.

When I have some code:

main()
{
    int n;
    int *p;

There is a place in my memory that looks like this:                                          
    60                :
    61    Address:    :                                                                                
    62             |-----|
    63       0x5100|     | n is an integer, one machine word big                              
    64             |-----|
    65       0x5104|     | p is a pointer, also one word big
                   |-----|
             0x5108|     | other unused memory
                   |-----| 
                      :
                      :
Let's give these variables some values.
I set n to be the number 151.

n = 151;
I set the pointer p to point to the integer n.
p = &n;

That says, "the value of the variable p is assigned the address of the variable n".

                        : 
            Address:    :    Value at the address:
                     |----|
            0x5100   | 151|  n
                     |----|
            0x5104   |5100|  p
                     |----|
            0x5108   |   ?|
                     |----|
                       : :

Now I want to print out the value of n, by two ways.
printf("n is %d.\n", n);
printf("n is %d.\n", *p);

The * operator says, "give me the object at the following address." The object's type is the type that the pointer was declared as. 
So, since we declared "int *p", the object pointed at will be _assumed_ by C to be an int.  In this case, we were careful to make this coincide with what we were pointing at.

Now I want to print out the memory address of n.
        printf("n is located at $%x.\n", &n);
        printf("n is located at $%x.\n", p);

The & operator says, "tell me the address where the following object starts." 
In this case, it is hex 5100 (I put a '$' before it, to conform to the Assembly notation I am used to).
Notice the _value_ of p is an address.

Hm.  Does p have an address?  Sure.  It is a variable, and all variables have their own address.  The address of p is hex 5104.
        
        printf("p is located at $%x.\n", &p);

Here we are taking the address of a pointer variable,

using the & operator.

main()
{
    char name[] = "Bill";
    char *p;
    int *q;

Now we have an array to play with.  Here's how memory looks now:

       |---|
0x5100 |'B'|  "name" is an address constant that has value hex 5100
       |---|
0x5101 |'i'|  char: 1 byte
0x5102 |'l'|  char: 1 byte
       |---|
0x5103 |'l'|  char: 1 byte
       |---|
0x5104 |\0 |  char: 1 byte
       |---|
0x5105 |   |  p is a pointer: 1 word
       |---|
0x5109 |   |  q is a pointer: 1 word
       |---|

    p = name;

We set p to the value of name.  Now p has value hex 5100 too.
We can use the * dereferencing operator on p, and get the
character 'B' as a result.

Now what happens if I do this:
        ++p;

The pointer p is incremented.  What value does it have now?
Hex 5101.  Pretty simple.
