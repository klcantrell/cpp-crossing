#include <iostream>

using std::cin;
using std::cout;

using std::endl;

void scale_number(int &num)
{
    if (num > 100)
    {
        num = 100;
    }
}

void functions()
{
    // pass by reference
    int my_num{1000};
    scale_number(my_num);
    cout << my_num; // will be 100
}
