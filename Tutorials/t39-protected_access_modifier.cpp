#include <iostream>
using namespace std;
// Protected Access Modifier
class Base
{
    /***************** Protected modifier *****************/
    /* It is just like private but we can inheritance it. */
protected:
    int a;

private:
    int b;

public:
    void setData();
    int *data_b()
    {
        return &b; // returning the address of 'b' so that later it can be changed using pointer
    }
    void basePrint()
    {
        cout << "a is " << a << "\tb is " << b << endl;
    }
    ~Base();
};

void Base::setData()
{
    a = 3;
    b = 5;
}
Base::~Base()
{
}

class Derived : public Base
{
private:
public:
    void process();
    void derPrint()
    {
        cout << "a is " << a << "\tb is " << *data_b() << endl;
    }
    ~Derived();
};
void Derived::process()
{
    a = 10;
    int *temp_b = data_b(); // changing a private value of another class using pointer
    *temp_b = 15;
}
Derived::~Derived()
{
}

int main()
{
    Derived d1;
    
    d1.setData();
    d1.basePrint();

    d1.process();
    d1.derPrint();

    cout << endl;

    return 0;
}
/*
****************    Public derivation       Private derivation(default)     Protected derivation
Private members       Not Inherited              Not Inherited                  Not Inherited
Protected members      Protected                   Private                        Protected
Public members          Public                     Private                        Protected
*/