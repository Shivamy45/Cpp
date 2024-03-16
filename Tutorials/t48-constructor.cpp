#include <iostream>
using namespace std;
// Constructor in Derived Class
class Base1
{
private:
    int data1;

protected:
public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base_1 constructor called" << endl;
    }
    void prtData_base1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
    ~Base1();
};

Base1::~Base1()
{
}

class Base2
{
private:
    int data2;

protected:
public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base_2 constructor called" << endl;
    }
    void prtData_base2()
    {
        cout << "The value of data_2 is " << data2 << endl;
    }
    ~Base2();
};

Base2::~Base2()
{
}

class Derived : public Base1, public Base2
{
private:
    int der1, der2;

protected:
public:
    Derived(int a, int b, int c, int d) : Base1(c), Base2(d)
    {
        der1 = a;
        der2 = b;
        cout << "Derived constructor called" << endl;
    }
    void prtData_derived()
    {
        cout << "The value of der_1 is " << der1 << endl;
        cout << "The value of der_2 is " << der2 << endl;
    }
    ~Derived();
};

Derived::~Derived()
{
}

int main()
{
    /***************** using Constructions in derived Classes *****************/
    Derived d1(1, 2, 3, 4);
    d1.prtData_derived();
    
    cout << endl;
    return 0;
}
/*
case 1:
class B : public A
    // order of execution of constructor -> first A() then B()

case 2:
class B : public A, public C
    // order of execution of constructor -> first A() then C() then B()

case 3:
class B : public A, virtual public C
    // order of execution of constructor -> first C() then A() then B()
*/