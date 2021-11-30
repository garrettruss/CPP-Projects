/* Pass-by-reference refers to passing parameters to a function by using references. When called, the function can modify the value of the arguments by using the reference passed in.

This allows us to:

Modify the value of the function arguments.
Avoid making copies of a variable/object for performance reasons.*/

#include <iostream>

int triple(int &i)
{

    i = i * 3;

    return i;
}

int main()
{

    int num = 1;

    std::cout << triple(num) << "\n";
    std::cout << triple(num) << "\n";
}

/*After triple() is called the first time, num is modified from 1 to 3. So when triple() is called the second time, the output is 9. */