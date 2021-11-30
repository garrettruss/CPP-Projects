
/* 

In C++, a set is a data structure that stores multiple unique elements in a single variable. Elements of a set are not accessible by index like vectors. Instead, they are accessible by key values. In a set, the value of each element acts as its own key that uniquely identifies it.

Note: A set cannot contain duplicate elements. If the initializer list contains duplicate values, only one copy of the value will be kept in the set:

The .insert() function adds a new element to the set. Since sets cannot contain duplicate elements, an element is inserted only if it is not equivalent to any other element already in the set:

The .erase() function removes an element from the set. The argument is the key that identifies the element to be removed:

When .erase() is used this way, it returns 1 if an element was successfully erased, and 0 otherwise.

The .count() function searches in the set and returns the number of elements that match the argument value.

Because sets do not allow for duplicate keys, the .count() function is a convenient way of checking whether the set contains a specified element:

The .size() function returns the number of elements in the set:

The .empty() function returns a boolean value of whether the set is empty:

As the name suggests, an unordered_set stores elements in no particular order. Searching, inserting, and deleting an element from an unordered_set is generally faster compared to a set.

On the other hand, a set stores elements following a specific order and can be iterated directly based on the order of its elements.

 Only use set when you need to store elements in a sorted fashion. Otherwise use unordered_set because it’s generally faster.

*/
#include <iostream>
#include <unordered_set>
#include <set>

int main()
{
    std::unordered_set<int> primes({2, 3, 5, 7});

    primes.insert(11);
    primes.insert(13);
    primes.insert(11); // Duplicates are not inserted

    primes.erase(2);
    primes.erase(13);

    if (primes.count(2))
        std::cout << "primes contains 2.\n";
    else
        std::cout << "primes does not contain 2.\n";

    std::cout << "Size of primes: " << primes.size() << "\n";

    std::cout << "Primes contains: ";
    for (int i : primes)
    {
        std::cout << i << " ";
    }

    std::set<int> ordered_primes({11, 7, 3, 5});

    std::cout << "\nOrdered primes contains: ";
    for (int i : ordered_primes)
    {
        std::cout << i << " ";
    }

    return 0;
}