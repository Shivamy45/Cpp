#include <iostream>
using namespace std;
// reference variables & typecasting
int c = 9; // global variable
int main()
{
    /***************** Local, Global variable *****************/

    int a, b, c;
    cout << "Enter the value of a:\n";
    cin >> a;
    cout << "Enter the value of b:\n";
    cin >> b;
    c = a + b;
    cout << "the local variable 'c' is: " << c << "\n";
    cout << "the global variable 'c' is : " << ::c << "\n";
    cout << endl;

    /***************** Float, Double and long double Literals *****************/

    float d = 34.245;
    double e = 34.245;
    long double f = 34.245;
    cout << "The value of d is " << d << endl;
    cout << "The value of e is " << e << "\n";

    /* if same number is assigned to float and double both then if you pass that value in a function it will be treated as double */
    // so to make it float we give a f as suffix in value. Ex. 34.4 ---> 34.3f

    cout << "The size of 34.245 is " << sizeof(34.245) << "\n";
    cout << "The size of 34.245f is " << sizeof(34.245f) << "\n";
    cout << "The size of 34.245F is " << sizeof(34.245F) << "\n";
    cout << "The size of 34.245l is " << sizeof(34.245l) << "\n";
    cout << "The size of 34.245L is " << sizeof(34.245L) << "\n";
    cout << endl;

    /***************** Refernece Variable *****************/

    /* shivam -> shiv -> shiva */ // Refernce variable - one thing but many names
    float x = 39;
    float &y = x; // 'y' is pointing to 'x'
    cout << "" << x << "\n";
    cout << "" << y << "\n";
    cout << endl;

    /***************** Typecasting *****************/

    int a = 5.1;
    cout << "a = " << a << endl;
    cout << "float(a) = " << float(a) << endl;

    float b = 4.6;
    cout << "b = " << b << endl;
    cout << "int(b) = " << int(b) << endl;

    int c = int(b);
    cout << "a + b = " << a + b << "\n";
    cout << "a + (int)b = " << a + (int)b << "\n";
    cout << "a + int(b) = " << a + int(b) << "\n";
    cout << "a + c = " << a + c << "\n";
    cout << endl;

    return 0;
}