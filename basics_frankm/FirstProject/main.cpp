#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int favorite_number;
    cout << "Enter your favorite number between 1 and 100: ";
    cin >> favorite_number;
    cout << "Amazing!! That's is my favorite number, too!" << endl;
    cout << "No really!!, " << favorite_number << " is my favorite number!" << endl;
    return 0;
}
