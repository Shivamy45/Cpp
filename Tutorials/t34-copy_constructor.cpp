#include <iostream>
using namespace std;
// copy constructor
class number
{
private:
    int a;

public:
    number()
    {
        a = 1;
    }
    number(int num)
    {
        a = num;
    }
    // when no copy constructor is found, compiler supplies its own copy constructor
    number(number &o)
    {
        cout << "This is copy constructor" << endl;
        a = o.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    number x, y(2), z(5);
    x.display();
    y.display();
    z.display();

    /***************** Copy constructor *****************/

    number a(z); // Copy constructor invoked
    a.display();

    number b;
    b = y; // Copy constructor not invoked
    b.display();

    number c = y; // Copy constructor invoked
    c.display();

    cout << endl;

    return 0;
}