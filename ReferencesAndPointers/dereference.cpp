/*
The asterisk sign * a.k.a. the dereference operator is used to obtain the value pointed to by a variable. This can be done by preceding the name of a pointer variable with *.

int blah = *ptr;
The double meaning of the * symbol can be tricky at first, so make sure to note:

When * is used in a declaration, it is creating a pointer.
When * is not used in a declaration, it is a dereference operator. 
*/

#include <iostream>

int main()
{

    int power = 9000;

    // Create pointer
    int *ptr = &power;

    // Print ptr
    std::cout << ptr << "\n";
    //ptr is the memory address of power

    // Print *ptr
    std::cout << *ptr;
    //*ptr is the value of power
}