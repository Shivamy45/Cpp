#include <iostream>
using namespace std;
// Ambiguity Resolution
class GM
{
private:
protected:
public:
    GM() {}
    void greet()
    {
        cout << "Good Morning" << endl;
    }
};

class GE
{
private:
protected:
public:
    GE() {}
    void greet()
    {
        cout << "Good Evening" << endl;
    }
};

class GN
{
private:
protected:
public:
    GN() {}
    void greet()
    {
        cout << "Good Night" << endl;
    }
};

class derived : public GM, public GE, public GN
{
private:
protected:
public:
    void greet()
    {
        GN ::greet(); // defining what to do if ambigious funtion comes in an derived class
    }
};

class B
{
private:
protected:
public:
    void say()
    {
        cout << "This is class B" << endl;
    }
};
class D : public B
{
private:
protected:
public:
    void say()
    {
        cout << "This is derived class D" << endl;
    }
};

int main()
{
    GM o1;
    GE o2;
    GN o3;
    o1.greet();
    o2.greet();
    o3.greet();

    /***************** Ambiguity Resolution *****************/

    derived o4;
    o4.greet();

    /* derived ambiguios function will be override on base function with same name */    
    
    B b;
    b.say();
    D d;
    d.say();
    
    cout << endl;
    return 0;
}