#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using std::string;

using std::cin;
using std::cout;

using std::endl;

void strings()
{
    string cpp_first_name{"Kalalau"}; // c++ style string
    char first_name[20]{};            // c-style string (just an fixed array of char)

    cout << "Please enter your first name: ";
    cin >> first_name;
    cout << "Hello, " << first_name << ", your first name has " << strlen(first_name) << " characters" << endl;

    string concatenation_example = cpp_first_name + " Cantrell"; // okay to mix c++ and c strings
    cout << "Full name: " << concatenation_example << endl;

    string example_string; // because string is a class, this will be initialized automatically
    int example_string_length = example_string.length();
    cout << "example_string.length(): " << example_string_length << endl;

    int location_of_last_name{-1};
    location_of_last_name = concatenation_example.find("Cantrell");
    cout << "Position of last name: " << location_of_last_name << endl;
}
