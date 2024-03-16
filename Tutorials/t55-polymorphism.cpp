#include <iostream>
using namespace std;
// Polymorphism
class Base
{
public:
    int var1 = 0;
    void display()
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
    Base *base_ptr;
    Derived *derived_ptr;
    Derived derived_obj;

    /***************** Base pointer pointing derived object *****************/

    base_ptr = &derived_obj; // pointer is pointing derived object but will use base class function(as it is Base *ptr)
    base_ptr->display();
    base_ptr->var1 = 4;
    base_ptr->display();

    /***************** Derived pointer pointing derived object *****************/

    derived_ptr = &derived_obj;
    derived_ptr->display();
    derived_ptr->var1 = 9;
    derived_ptr->var2 = 8;
    derived_ptr->display();

    cout << endl;
    return 0;
}
/*
/::::::::::::::::: t54 :::::::::::::::::/
Polymorphism - one name and multiple forms

Polymorphism in C++ can be of two types:
1. Compile time polymorphism
        Compile time polymorphism in C++ is acheived using:
            1.1 - Function overloading
            1.2 - Operator overloading
2. Run time polymorphism
        Compile time polymorphism in C++ is acheived using:
        2.1  - Virtual functions
*/