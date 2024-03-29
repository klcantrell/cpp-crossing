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
unsigned long long factorial(unsigned long long);

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
    cout << factorial(4) << endl;
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
    static int times_called{0}; // value retained between calls. like a global variable but scoped to this function
    times_called += 1;
    cout << "display(int num) called " << times_called << " times" << endl;
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

unsigned long long factorial(unsigned long long n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
