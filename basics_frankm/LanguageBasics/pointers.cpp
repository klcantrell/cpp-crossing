#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;

using std::cin;
using std::cout;

using std::endl;

int *create_array(size_t size, int init_value = 0)
{
    int *new_storage{nullptr};
    new_storage = new int[size];
    for (size_t i{0}; i < size; i++)
    {
        *(new_storage + i) = init_value;
    }
    return new_storage; // this is important, be sure to not lose the pointer
}

void display(const int *const array, size_t size)
{
    for (size_t i{0}; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void pointers()
{
    int score{10};
    double high_temp{100.7};
    int *score_ptr{nullptr};

    score_ptr = &score;
    // score_ptr = &high_temp; // compiler error due to type mismatch

    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};

    // all pointers are the same size
    cout << "sizeof p1 is " << sizeof p1 << endl;
    cout << "sizeof p2 is " << sizeof p2 << endl;
    cout << "sizeof p3 is " << sizeof p3 << endl;
    cout << "sizeof p4 is " << sizeof p4 << endl;
    cout << "sizeof p5 is " << sizeof p5 << endl;

    // dereferencing operator or indirection operator
    cout << "Dereferenced score_ptr should be 10: " << *score_ptr << endl;
    *score_ptr = 20;
    cout << "Value of score should now be 20: " << score << endl;
    score = 30;
    cout << "Dereferenced score_ptr should now be 30: " << *score_ptr << endl;

    // dynamic memory allocation
    int *array_ptr{nullptr};
    int size{0};

    cout << "How big do you want the array? ";
    // cin >> size;

    array_ptr = new int[size];

    for (int i{0}; i < size; i++)
    {
        array_ptr[i] = i;
    }

    cout << "Element at index 9: " << array_ptr[9] << endl;

    cout << "Second element: " << *(array_ptr + 1) << endl; // since each int is 4 bytes in size

    delete[] array_ptr;

    // arithmetic
    int scores[]{100, 95, 89, 68, -1};
    int *scores_ptr{scores};

    while (*scores_ptr != -1)
    {
        cout << *scores_ptr << endl;
        scores_ptr += 1; // here's the arithmetic
    }

    // functions and pointers
    int *my_array{nullptr};
    size_t my_array_size{0};
    int init_value{0};
    cout << "How many integers would you like to allocate? ";
    // cin >> my_array_size;
    cout << "What value would you like them initialized to? ";
    // cin >> init_value;
    my_array = create_array(my_array_size, init_value);
    cout << "---------------------------------" << endl;
    display(my_array, my_array_size);
    delete[] my_array;

    // references
    vector<string> stooges{"Larry", "Moe", "Curly"};

    for (string &str : stooges)
    {
        str = "Funny"; // if it wasn't a reference, we wouldn't be able to modify the object
    }

    for (string const &str : stooges)
    {
        cout << str << endl; // common to use references so we don't need to make copies of each item
    }

    double temps[]{56.4, 100.2, 97.2};
    double *temp_ptr_1 = &temps[2];
    double *temp_ptr_2 = &temps[0];
    cout << "Length between temps: " << temp_ptr_1 - temp_ptr_2 << endl;
    cout << "Value of temp_ptr_1 - 2 " << *(temp_ptr_1 - 2) << endl;
}
