#include <iostream>
using namespace std;
// This pointer
class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    void getData()
    {
        cout << "Value of a is " << a << endl;
    }
};

class B
{
    int b;

public:
    B &setData(int b)
    {
        this->b = b;
        return *this;
    }
    void getData()
    {
        cout << "Value of b is " << b << endl;
    }
};
int main()
{
    A a;
    a.setData(4);
    a.getData();

    /***************** Call by Reference *****************/
    
    B b;
    b.setData(9).getData();

    cout << endl;
    return 0;
}