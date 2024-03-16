#include <iostream>
using namespace std;
// Construction overloading
class complex
{
private:
    int a, b;

public:
    complex();
    complex(int x);
    complex(int x, int y);
    void prtData()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

complex::complex()
{
    a = 0;
    b = 0;
}
complex::complex(int x)
{
    a = x;
    b = 0;
}
complex::complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    complex c1;
    c1.prtData();

    complex c2(1);
    c2.prtData();

    complex c3(3, 4);
    c3.prtData();

    cout << endl;

    return 0;
}