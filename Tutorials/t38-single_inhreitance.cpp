#include <iostream>
using namespace std;
// Single Inheritance
class Base
{
private:
    int data1;

public:
    int data2;
    void setData();
    int pvtData();
    ~Base();
};

void Base::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int Base::pvtData(void)
{
    return data1;
}
Base::~Base()
{
}

class derived : public Base
{
private:
    int data3;

public:
    void process();
    ~derived();
    void display()
    {
        cout << "Data 1: " << pvtData() << endl;
        cout << "Data 2: " << data2 << endl;
        cout << "Data 3: " << data3 << endl;
    }
};

void derived::process(void)
{
    data3 = data2 + pvtData();
}
derived::~derived()
{
}

int main()
{
    /***************** Single Inheritance *****************/

    derived d1;
    d1.setData();
    d1.process();
    d1.display();

    cout << endl;

    return 0;
}