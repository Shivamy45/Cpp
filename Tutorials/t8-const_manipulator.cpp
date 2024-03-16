#include <iostream>
#include <iomanip>
using namespace std;
// Constants, Manipulators  & Operators Precedence
int main()
{
    /***************** Constants *****************/

    const int a = 5;
    cout << a << endl;
    cout << endl;
    // a = 6; // this cannot be done because a is a constant

    /***************** Manipulators *****************/

    int b = 1, c = 22, d = 333, e = 4444;
    cout << "The value of b without setw is: " << b << endl;
    cout << "The value of c without setw is: " << c << endl;
    cout << "The value of d without setw is: " << d << endl;
    cout << "The value of e without setw is: " << e << endl;
    cout << endl;

    cout << "The value of b is: " << setw(3) << b << endl;
    cout << "The value of c is: " << setw(3) << c << endl;
    cout << "The value of d is: " << setw(3) << d << endl;
    cout << "The value of e is: " << setw(3) << e << endl;
    cout << endl;

    /***************** Operator Precedence *****************/

    int f = 3, g = 5;
    int i = 4;
    i = f * g + g * i; // just google the precedence and its same a little bit as BODMAS
    cout << "i is: " << i << endl;
    cout << endl;

    return 0;
}