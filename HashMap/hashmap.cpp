/* 
In C++, a hash map is a data structure that stores a collection of elements formed by a combination of a key value and a mapped value. Each key value acts as a unique identifier for the element, while the mapped value is the content associated with this key. This is often referred to as a key-value pair.

A hash map cannot contain elements with duplicate keys. If the initializer list contains elements with duplicate keys, only the first element will be kept:

The .insert() function adds a new key-value pair to the hash map. Since hash maps cannot contain duplicate keys, an element is inserted only if its key is not equivalent to any of the other elements already in the container.

When inserting an element, make sure that that the types of the key and the mapped value match the hash map:


Another way of inserting elements into a hash map is by using the [] operator. Normally, [] is used to access existing elements in the hash map. However, if the key specified inside [] does not match the key of any element in the container, the function inserts a new element with that key. From there, a mapped value can be assigned to the new element:

The .erase() function removes an element from the hash map. The argument is the key that identifies the element to be removed:

When .erase() is used this way, it returns 1 if an element was successfully erased, and 0 otherwise.

The .count() function searches in the hash map and returns the number of elements whose key matches the argument value.

Because hash maps do not allow for duplicate keys, the .count() function is a convenient way of checking whether the hash map contains an element with the specified key:

To access the elements of a hash map, use the [] operator along with a key value. This operation returns a reference to the mapped value associated with the specified key:

The .size() function returns the number of elements in the hash map:

The .empty() function returns a boolean value of whether the hash map is empty:

As the name suggests, an unordered_map stores elements in no particular order. Searching, inserting, and deleting an element from an unordered_map is generally faster compared to a map.

On the other hand, a map stores elements following a specific order of key values and can be iterated directly based on the order of its elements.

 Only use map when you need to store elements in a sorted fashion. Otherwise use unordered_map because it’s generally faster.

*/

#include <iostream>
#include <unordered_map>
#include <map>

int main()
{
    std::unordered_map<std::string, int> country_codes(
        {{"India", 91},
         {"Italy", 39},
         {"Italy", 27}});

    country_codes.insert({"Thailand", 66});
    country_codes.insert({"Peru", 51});
    country_codes.insert({"Peru", 9}); // Duplicate key is not inserted

    country_codes.erase("Thailand");
    country_codes.erase("Italy");

    country_codes["Japan"] = 81;
    country_codes["Turkey"] = 90;

    if (country_codes.count("Belgium"))
    {
        std::cout << "There is a code for Belgium\n";
    }
    else
    {
        std::cout << "There isn't a code for Belgium\n";
    }

    std::cout << country_codes["Japan"] << "\n";

    std::cout << country_codes.size() << "\n";

    std::cout << country_codes.empty() << "\n";

    for (auto it : country_codes)
    {
        std::cout << it.first << " " << it.second << "\n";
    }

    return 0;
}