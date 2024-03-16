#include <iostream> // this is a header file and can be searched for more on "cppreference.com"
using namespace std;
// header files and operators
int main()
{
    cout << "Operators in C++:" << endl; // '<< endl' is used just as '\n'
    cout << "Following are the types of operators in C++\n";
    cout << endl;

    /***************** Assignment operators *****************/

    int a = 10, b = 4;

    /***************** Arithmetic operators *****************/

    cout << "a + b is " << a + b << "\n";
    cout << "a - b is " << a - b << "\n";
    cout << "a * b is " << a * b << "\n";
    cout << "a / b is " << a / b << "\n";
    cout << "a % b is " << a % b << "\n";
    cout << "a is " << a << "\n";
    cout << "a++ is " << a++ << "\n";
    cout << "a-- is " << a-- << "\n";
    cout << "a is " << a << "\n";
    cout << "++a is " << ++a << "\n";
    cout << "--a is " << --a << "\n";
    cout << "a is " << a << "\n";
    cout << endl;

    /***************** Comparison operators - true or false *****************/

    cout << "a == b is " << (a == b) << "\n";
    cout << "a != b is " << (a != b) << "\n";
    cout << "a <= b is " << (a <= b) << "\n";
    cout << "a >= b is " << (a >= b) << "\n";
    cout << "a > b is " << (a > b) << "\n";
    cout << "a < b is " << (a < b) << "\n";
    cout << endl;

    /***************** Logical operators *****************/

    cout << "Following are the logical operators in C++" << endl;
    cout << "The value of this logical \"and operator\" ((a == b) && (a < b)) is " << ((a == b) && (a < b)) << "\n";
    cout << "The value of this logical \"or operator\" ((a == b) || (a > b)) is " << ((a == b) || (a > b)) << "\n";
    cout << "The value of this logical \"not operator\" (!(a == b)) is " << (!(a == b)) << "\n";
    cout << endl;

    return 0;
}