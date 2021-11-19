#include <iostream>

/* 
As an example of iteration, we have the first program ever to run on a stored-program computer (the EDSAC). It was written and run by David Wheeler in the computer laboratory at Cambridge University, England, on May 6th, 1948, to calculate and print a simple list of squares like the following:
*/

int main()
{

    int i = 0;
    int square = 0;

    while (i < 10)
    {

        square = i * i;

        std::cout << i << "  " << square << "\n";

        i++;
    }
}