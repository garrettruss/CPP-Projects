#include "song.hpp"
#include <iostream>

//Song constructor:
Song::Song(std::string new_title, std::string new_artist)
    : title(new_title), artist(new_artist) {}

//Song destructor:
Song::~Song()
{

    std::cout << "Goodbye " << title;
}

std::string Song::get_title()
{

    return title;
}

std::string Song::get_artist()
{

    return artist;
}