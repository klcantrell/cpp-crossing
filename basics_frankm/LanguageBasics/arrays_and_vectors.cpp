#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void arrays_and_vectors()
{
    int high_temperatures[365]{0};          // common way to initialize a whole array to 0
    int test_scores[]{100, 98, 96, 95, 86}; // common way to initialize an array

    cout << "First score: " << test_scores[0] << endl;
    cout << "Second score: " << test_scores[1] << endl;
    cout << "Third score: " << test_scores[2] << endl;
    cout << "Fourth score: " << test_scores[3] << endl;
    cout << "Fifth score: " << test_scores[4] << endl;

    // cout << "Enter a test score: ";
    // cin >> test_scores[5];                               // don't do this!
    // cout << "Mystery score: " << test_scores[5] << endl; // don't do this!

    double low_temps[]{50.2, 44.5, 59.2, 36.3, 42.8};
    cout << "The first low temp is " << low_temps[0] << endl;
    low_temps[0] = 51.7;
    cout << "The first low temp is now " << low_temps[0] << endl;

    int game_scores[5]{}; // initializes all to 0
    cout << "First game score: " << game_scores[0] << endl;

    cout << "Memory address of game_scores: " << game_scores << endl;
}
