#include <iostream>
#include <string>
using namespace std;

int main()
{
    // a string variable named str
    string str = "17";
    // print to the console
    cout << "I am a string " << str << endl;

    // convert the string str variable to have an int value
    // place the new value in a new variable that holds int values, named num
    int num = stoi(str);

    // print to the console
    cout << "I am an int " << num << endl;
}