#include <iostream>

int main()
{

    int soda = 99;
    int &pop = soda;
    pop++;

    std::cout << soda << "\n";
    std::cout << pop << "\n";
}

/* In C++, a reference variable is an alias for something else, that is, another name for an already existing variable.

we can create an alias to it by using the & sign in the declaration.

Two things to note about references:

Anything we do to the reference also happens to the original.
Aliases cannot be changed to alias something else.


*/

#include <iostream>

int main()
{

    int power = 9000;

    // Create a pointer called ptr that points to the memory address of power.
    int *ptr = &power;

    // Print ptr memory address.
    std::cout << ptr;
}