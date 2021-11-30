/* Pointers
In C++, a pointer variable is mostly the same as other variables, which can store a piece of data. Unlike normal variables, which store a value (such as an int, double, char), a pointer stores a memory address.

While references are a newer mechanism that originated in C++, pointers are an older mechanism that was inherited from C. We recommend avoiding pointers as much as possible; usually, a reference will do the trick. However, you will see pointers a lot in the wild, particularly in older projects, where they are used in a very similar way to references.

Pointers must be declared before they can be used, just like a normal variable. They are syntactically distinguished by the *, so that int* means “pointer to int“ and double* means “pointer to double“.

int* number;
double* decimal;
char* character;

So suppose we have a variable called gum:

int gum = 8;

We can create a pointer to it by:

int* ptr = &gum;

int* makes it a pointer rather than a normal variable.
ptr is the pointer name.
&gum is the memory address of the other variable gum.
So now ptr has a value of gum‘s memory address.


Note: Syntactically, spaces around * do not matter, but the best practice is to have it after the data type.

int* number;
int *number;
int * number;
*/

