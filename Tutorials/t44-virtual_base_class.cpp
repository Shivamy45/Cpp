#include <iostream>
using namespace std;
// Virtual Base Class
class A
{
public:
    int a = 3;
    ~A();
};

A::~A()
{
}

class B : virtual public A
{
public:
    ~B();
};

B::~B()
{
}

class C : virtual public A
{
public:
    ~C();
};

C::~C()
{
}

class D : public B, public C
{
public:
    ~D();
};

D::~D()
{
}

int main()
{
    /***************** Virtual Base Classes - B and C *****************/

    D d;
    cout << d.a << endl;

    cout << endl;
    return 0;
}