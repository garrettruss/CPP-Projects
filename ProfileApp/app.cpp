#include <iostream>
#include "profile.hpp"

int main()
{

    Profile sam("Sam Jones", 30, "Newport", "USA", "he/him");
    sam.add_hobby("listening to audiobooks and podcasts");
    sam.add_hobby("hiking in the mountains");
    sam.add_hobby("cooking new meals");
    sam.add_hobby("reading the news");
    std::cout << sam.view_profile();
}