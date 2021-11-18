#include <iostream>

int main()
{

    // declare foreign currencies
    double lira;
    double won;
    double ruble;

    // declare USA currency
    double dollars;

    // Ask for user input for the currencies
    std::cout << "Enter number of Turkish Lira: ";
    // store response in relevant variable
    std::cin >> lira;

    std::cout << "Enter number of Korean Won: ";
    std::cin >> won;

    std::cout << "Enter number of Russian Ruble: ";
    std::cin >> ruble;

    // conversion rates
    // Lira conversion rate: 0.00032
    // won conversion rate: 0.27
    // ruble conversion rate: 0.3

    // determine total USD
    dollars = 0.00032 * lira + 0.27 * won + 0.3 * ruble;

    // Display total amount of USD
    std::cout << "Total USD = $" << dollars << "\n";

    // Given 4 lira, 5 won, and 6 ruble, you should have $3.12128 USD.
}

/* 
g++ currency.cpp
./a.out
*/