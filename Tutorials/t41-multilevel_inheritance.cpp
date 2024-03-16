#include <iostream>
using namespace std;
// Multiple Inheritance
// base class 1
class base1
{
private:
protected:
    int b1;

public:
    base1() {}
    void setBase1(int a1);
    ~base1();
};

void base1::setBase1(int a1)
{
    b1 = a1;
}
base1::~base1()
{
}

// base class 2
class base2
{
private:
protected:
    int b2;

public:
    base2() {}
    void setBase2(int a2);
    ~base2();
};

void base2::setBase2(int a2)
{
    b2 = a2;
}
base2::~base2()
{
}

// we can add many more bases
class base3
{
private:
    

protected:
    int b3;

public:
    base3(){}
    void setBase3(int a3);
    ~base3();
    
};

void base3::setBase3(int a3)
{
    b3 = a3;
}
base3::~base3()
{
}

// Derived class
class derived : public base1, public base2, public base3 // this is drived from two base classes
{
private:
    int sum;

protected:
public:
    void setData();
    void prtData();
    ~derived();
};

void derived::setData()
{
    sum = b1 + b2 + b3;
}
void derived::prtData()
{
    cout << "b1 is: " << b1 << endl;
    cout << "b2 is: " << b2 << endl;
    cout << "b3 is: " << b3 << endl;
    cout << "sum is: " << sum << endl;
}
derived::~derived()
{
}

int main()
{
    /***************** Multiple Inheritance *****************/
    
    derived o1;
    o1.setBase1(20);
    o1.setBase2(48);
    o1.setBase3(2);
    o1.setData();
    o1.prtData();

    cout << endl;
    return 0;
}