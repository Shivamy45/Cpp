#include <iostream>
using namespace std;
// Friend function
class complex
{
private:
    int a;
    int b;

public:
    void setData(int n1, int n2);
    void prtData();
    friend complex sumComplex(complex o1, complex o2);
};

void complex::setData(int n1, int n2)
{
    a = n1;
    b = n2;
}

void complex::prtData()
{
    cout << "Your complex number is " << a << " + " << b << "i" << endl;
}

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    /***************** Friend function *****************/

    complex c1, c2, sum;
    c1.setData(1, 6);
    c1.prtData();

    c2.setData(2, 5);
    c2.prtData();
    cout << endl;

    sum = sumComplex(c1, c2);
    sum.prtData();

    cout << endl;

    return 0;
}
/*
Properties of friend function
-> not in the scope of class
-> gets permission to use the private members
-> since it is not in the scope of the class, it cannot be called from the object of that class. // sum.sumComplex is invalid
-> Can be invoked without the help of any object
-> Usually contains the object as arguments
-> can be declared inside public or private section of the class
-> It cannot accesss the members directly by their names and need object_name.member_name to access any member
*/