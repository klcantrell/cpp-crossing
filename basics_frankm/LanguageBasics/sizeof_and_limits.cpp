#include <iostream>
#include <climits>

using std::cout;
using std::endl;

void sizeof_and_limits()
{
  cout << "short: " << sizeof(short) << " bytes" << endl;
  cout << "int: " << sizeof(int) << " bytes" << endl;
  cout << "long: " << sizeof(long) << " bytes" << endl;
  cout << "long long: " << sizeof(long long) << " bytes" << endl;
  cout << "float: " << sizeof(float) << " bytes" << endl;
  cout << "double: " << sizeof(double) << " bytes" << endl;
  cout << "long double: " << sizeof(long double) << " bytes" << endl;

  cout << "Min for char: " << CHAR_MIN << endl;
  cout << "Min for int: " << INT_MIN << endl;
  cout << "Max for char: " << CHAR_MAX << endl;
  cout << "Max for int: " << INT_MAX << endl;

  int age{32};
  cout << "sizeof age is " << sizeof(age) << " bytes" << endl;
}