#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void constants()
{
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << endl;
    cout << "How many small rooms would you like cleaned? ";

    int number_of_small_rooms{0};
    cin >> number_of_small_rooms;

    cout << "How many large rooms would you like cleaned? ";

    int number_of_large_rooms{0};
    cin >> number_of_large_rooms;

    const double price_per_small_room{25};
    const double price_per_large_room{35};
    const double sales_tax{0.06};
    const int estimate_expiry{30};

    cout << endl;
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;

    const double room_subtotal = price_per_small_room * number_of_small_rooms + price_per_large_room * number_of_large_rooms;
    const double calculated_tax = room_subtotal * sales_tax;

    cout << "Cost: $" << room_subtotal << endl;
    cout << "Tax: $" << calculated_tax << endl;
    cout << "===============================================" << endl;
    cout << "Total estimate: $" << room_subtotal + calculated_tax << endl;
    cout << "Estimate is good for " << estimate_expiry << " days." << endl;
}
