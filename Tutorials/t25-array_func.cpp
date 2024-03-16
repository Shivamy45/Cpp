#include <iostream>
using namespace std;
// Arrays of Objects & Passing Objects as function Arguments
class Employee
{
private:
    int id;
    int salary;

public:
    void setData(void);
    void prtData(void);
};

void Employee::setData(void)
{
    cout << "Enter your id" << endl;
    cin >> id;
    cout << "Enter your salary" << endl;
    cin >> salary;
}
void Employee::prtData(void)
{
    cout << "Employee " << id << " salary is: " << salary << endl;
}

/**********************************/

class complex
{
private:
    int a;
    int b;

public:
    void setData(int v1, int v2);
    void setDataBySum(complex o1, complex o2);
    void prtData(void);
};

void complex::setData(int v1, int v2)
{
    a = v1;
    b = v2;
}
void complex::setDataBySum(complex o1, complex o2)
{
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}
void complex::prtData(void)
{
    cout << "Your complex number is " << a << " + " << b << "i" << endl;
}

int main()
{
    /***************** Array of Objects *****************/

    // Employee fresher[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     fresher[i].setData();
    //     fresher[i].prtData();
    // }

    // cout << endl;

    /***************** Objects as Function arguments *****************/

    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.prtData();

    c2.setData(3, 4);
    c2.prtData();

    c3.setDataBySum(c1, c2);
    c3.prtData();

    cout << endl;

    return 0;
}