#include <iostream>

// Base class
class Animal
{
private:
    std::string gender;
    int age;

public:
    Animal(std::string new_gender, int new_age)
        : gender(new_gender), age(new_age) {}
};

// Derived class
class Dog : public Animal
{
private:
    std::string breed;

public:
    // Call base class constructor
    Dog(std::string new_gender, int new_age, std::string new_breed)
        : Animal(new_gender, new_age), breed(new_breed) {}

    void sound()
    {
        std::cout << "Woof\n";
    }
};

int main()
{
    // Calls Dog(string, int, string) constructor
    Dog buddy("male", 8, "Husky");

    // Output: Woof
    buddy.sound();

    return 0;
}
