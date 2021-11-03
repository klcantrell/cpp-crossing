#include <iostream>
#include <string>

using std::string;

using std::cin;
using std::cout;

using std::endl;

void scale_number(int &);
void scale_number();

void display(int = 10);
// void display(double = 10.2); // otherwise more than one overload would match
void display(double);
void display(string);

void functions()
{
    // pass by reference
    int my_num{1000};
    scale_number(my_num);
    scale_number();
    cout << my_num << endl; // will be 100

    display(2);
    display('2'); // is promoted to the int overload
    display(123.5);
    display(123.4F); // is promoted to the double overload

    string name{"Kal"};
    display(name);
    display(name.c_str()); // is promoted to C++ style string
    display("Kal");        // is promoted to C++ style string

    display();
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

void display(int num)
{
    cout << num << endl;
}

void display(double num)
{
    cout << num << endl;
}

void display(string str)
{
    cout << str << endl;
}
