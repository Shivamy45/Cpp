#include <iostream>
using namespace std;
// Virtual function
class Base
{
public:
    int var1 = 0;
    virtual void display()
    {
        cout << "var1 value is " << var1 << endl;
    }
};

class Derived : public Base
{
public:
    int var2 = 1;
    void display()
    {
        cout << "var1 value in derived is " << var1 << endl;
        cout << "var2 value is " << var2 << endl;
    }
};

int main()
{
    /***************** Virtual function *****************/

    Base *base_ptr;
    Base obj_base;
    Derived obj_derived;
    base_ptr = &obj_derived;
    base_ptr->display();
    /*
    If base class ptr is pointing to derived class, it will use base class function
    We use virtual so that pointer use functions of class which it will be pointing
    */
    cout << endl;
    return 0;
}