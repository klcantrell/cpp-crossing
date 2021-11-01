#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void section_8_challenge()
{
    int cents_input{0};

    int dollars_output{0};
    int quarters_output{0};
    int dimes_output{0};
    int nickels_output{0};
    int pennies_output{0};

    const int cents_in_dollars{100};
    const int cents_in_quarters{25};
    const int cents_in_dimes{10};
    const int cents_in_nickels{5};

    cout << "Enter an amount in cents: ";
    cin >> cents_input;

    cout << "You can provide change for this as follows:" << endl;

    dollars_output = cents_input / cents_in_dollars;
    cents_input %= cents_in_dollars;

    quarters_output = cents_input / cents_in_quarters;
    cents_input %= cents_in_quarters;

    dimes_output = cents_input / cents_in_dimes;
    cents_input %= cents_in_dimes;

    nickels_output = cents_input / cents_in_nickels;
    cents_input %= cents_in_nickels;

    pennies_output = cents_input;

    cout << "dollars    : " << dollars_output << endl;
    cout << "quarters   : " << quarters_output << endl;
    cout << "dimes      : " << dimes_output << endl;
    cout << "nickels    : " << nickels_output << endl;
    cout << "pennies    : " << pennies_output << endl;
}
