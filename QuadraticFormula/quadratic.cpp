#include <iostream>
#include <cmath>

int main()
{
    // Write a C++ program  that solves the quadratic equation

    // declare three variables
    double a;
    double b;
    double c;

    // Let users initalize the variables

    std::cout << "Enter a: ";
    std::cin >> a;

    std::cout << "Enter b: ";
    std::cin >> b;

    std::cout << "Enter c: ";
    std::cin >> c;

    // declare two variables to store the roots

    double root1;
    double root2;

    // The positive root with C++ math operators
    root1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);

    // The negative root
    root2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

    // Outputting the roots with C++ math operators
    std::cout << "Root 1 is " << root1 << "\n";
    std::cout << "Root 2 is " << root2 << "\n";


}

/*
$ g++ quadratic.cpp
$ ./a.out
 */

/*
Mock Input 
Enter a: 6
Enter b: -7
Enter c: -3

Mock Output
Root 1 is 1.5
Root 2 is -0.333333
 */