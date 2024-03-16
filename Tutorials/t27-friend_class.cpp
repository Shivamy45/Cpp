#include <iostream>
using namespace std;
// Friend Classes and Member
/***************** Forward declartion *****************/
class complex;

class calculator
{
private:
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(complex, complex);
    int sumImaginaryComplex(complex, complex);
};

class complex
{
private:
    int a;
    int b;

    /***************** Individually declaring functions as friends *****************/

    // friend int calculator::sumRealComplex(complex o1, complex o2);
    // friend int calculator::sumImaginaryComplex(complex o1, complex o2);

    /***************** Declaring the entire 'calculator' class as friend *****************/

    friend class calculator;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void prtData()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumImaginaryComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;

    o1.setData(1, 5);
    o1.prtData();

    o2.setData(2, 4);
    o2.prtData();

    calculator sum;

    int ans = sum.sumRealComplex(o1, o2);
    int ans2 = sum.sumImaginaryComplex(o1, o2);

    cout << "The sum of real part of complex 1 and 2 is: " << ans << endl;
    cout << "The sum of imaginary part of complex 1 and 2 is: " << ans2 << endl;
    cout << endl;

    return 0;
}