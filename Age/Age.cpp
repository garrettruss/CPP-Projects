// a header file that enables the use of functions for outputing information
// e.g. cout or inputing information e.g. cin
#include <iostream>

// a namespace statement; you won't have to use the std:: prefix
using namespace std;

int main()
{ // start of main function of the program
    int age = 28;
    // initialize a variable.
    // Initializing  is providing the type,name and value of the varibale in one go.

    // output to the console: "My age is 28",using chaining, <<
    cout << "My age is: " << age << endl;
} // end the main function