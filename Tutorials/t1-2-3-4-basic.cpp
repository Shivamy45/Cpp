#include <iostream>
using namespace std;
// basics, variables
int main()
{
    /***************** Starting tutorial 1 *****************/
    std::cout << "Hello World"; // we can declare std as this or given below

    /***************** Starting tutorial 2 *****************/
    
    cout << "Hello World\n";
    cout << endl;

    /***************** Starting tutorial 3 *****************/

    int a = 1;
    float b = 2.3;
    char c = 'a';
    double d = 4.56789123456789; // same as float but for long decimal numbers
    bool e;                      // true or false - boolean

    // long double f = 5.99999....; // this is used for too long decimal no.(but not infinite)

    /***************** Starting tutorial 4 *****************/

    cout << "a is " << a << "\n"; // "<<a<<" this is used to print the variables
    cout << "b is " << b << "\n";
    cout << "c is " << c << "\n";
    cout << "d is " << d; // if printing the value in last we can use this too
    cout << "\n";
    cout << d; // we can print without "" when only printing var
    cout << endl;

    e = true; // gives 1 when true
    cout << "boolean is " << e << " when true\n";
    e = false; // gives 0 when false
    cout << "boolean is " << e << " when false\n";
    cout << endl;

    return 0;
}