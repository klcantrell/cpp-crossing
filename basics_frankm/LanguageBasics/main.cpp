#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // BASIC I/O
    int room_width{0};
    // cout << "Enter the width of the room: ";
    // cin >> room_width;

    int room_length{0};
    // cout << "Enter the length of the room: ";
    // cin >> room_length;

    // cout << "The area of the room is " << room_width * room_length << " square feet." << endl;

    // PRIMITIVE TYPES
    char middie_initial{'L'};
    cout << "My middle initial is " << middie_initial << endl;

    unsigned short exam_score{55};
    cout << "My exam score was " << exam_score << endl;

    int countries_represted{65};
    cout << "My were " << countries_represted << " countries represented" << endl;

    long people_in_florida{20'610'000};
    cout << "There are about " << people_in_florida << " people in florida" << endl;

    // long people_on_earth{7'600'000'000'000'000'000}; // will not compile on Windows
    long long people_on_earth{7'600'000'000'000'000'000}; // will not compile on Windows
    // int people_on_earth{7'600'000'000'000'000'000}; // will not compile
    cout << "There are about " << people_on_earth << " people on earth" << endl;

    // long very_large_number{4011e120}; // will not compile
    double very_large_number{4011e120}; // will not compile
    cout << very_large_number << " is a very large number" << endl;

    bool game_over{false};
    cout << "The value of game_over is " << game_over << endl;

    // Overflow example
    short const short_value_1{30000};
    short const short_value_2{1000};
    // short short_product_value{short_value_1 * short_value_2}; // will not compile
    short short_product_value{short_value_2 * 20};
    cout << "The sum of " << short_value_1 << " and " << short_value_2 << " is " << short_product_value << endl;

    return 0;
}
