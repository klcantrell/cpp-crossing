#include <iostream>

using std::cin;
using std::cout;

using std::endl;

void scale_number(int &);
void scale_number();

void functions()
{
    // pass by reference
    int my_num{1000};
    scale_number(my_num);
    scale_number();
    cout << my_num << endl; // will be 100
}

void scale_number(int &num)
{
    if (num > 100)
    {
        num = 100;
    }
}

void scale_number()
{
    cout << "You didn't pass any number argument!" << endl;
}
