#include <string>

class Song
{

    std::string title;
    std::string artist;

public:
    //constructor
    Song(std::string new_title, std::string new_artist);
    //destructor here:
    ~Song();

    std::string get_title();

    std::string get_artist();
};