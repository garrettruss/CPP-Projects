#include <iostream>

class Animal
{
public:
    void action()
    {
        std::cout << "The animal does something.\n";
    }
};

class Fish : public Animal
{
public:
    void action()
    {
        std::cout << "Fishes swim.\n";
    }
};

class Bird : public Animal
{
public:
    void action()
    {
        std::cout << "Birds fly.\n";
    }
};

int main()
{
    Animal newAnimal;
    Fish newFish;
    Bird newBird;

    newAnimal.action();
    newFish.action();
    newBird.action();

    return 0;
}