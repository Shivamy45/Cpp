#include <iostream>
using namespace std;
// Constructors
class complex
{
private:
    int a, b;

public:
    /***************** Creating a constructor *****************/

    complex(void); // constructoe declaration

    void setData(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void prtdata()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex::complex(void) // this is a default constructor
{
    a = 4;
    b = 3;
}

int main()
{
    /***************** Constructors *****************/

    complex c1, c2, c3;
    c1.prtdata();

    c2.setData(1, 2);
    c2.prtdata();
    cout << endl;

    return 0;
}
/*
Constructor is a special member function with same name as of the class.
It is used to initialize the objects of its class

Characterstics of constructor

1. It should be declared in the public section of the class
2 They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address
*/