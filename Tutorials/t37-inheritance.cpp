#include <iostream>
using namespace std;
// Inheritance
// Base class
class Employee
{
private:
    int age;

public:
    int id;
    int salary;
    Employee() { cout << "Base class default constructor is used" << endl; }
    Employee(int a, int b, int c);
    ~Employee();
    void display()
    {
        cout << "Employee " << id << "'s age: " << age << "." << endl;
        cout << "Salary: " << salary << "." << endl;
        cout << endl;
    }
};

Employee::Employee(int a, int b, int c = 500)
{
    id = a;
    age = b;
    salary = c;
}
Employee::~Employee()
{
}

/*
// Derived class syntax
class {{derived-class name}} : {{visibility-mode}}  {{base-class-name}}
{
    class members/methods/etc.
}
*/

// Derived class
class programmer : Employee
{
private:
    int code;

public:
    programmer(int, int);
    ~programmer();
    void display()
    {
        cout << "Employee " << id << "'s code is " << code << endl;
        cout << endl;
    }
};

programmer::programmer(int a, int b)
{
    id = a;
    code = b;
}
programmer::~programmer()
{
}

int main()
{
    /***************** Base class *****************/

    Employee e1(1, 23), e2(2, 34, 1000);
    e1.display();
    e2.display();

    /***************** Derived Class *****************/

    programmer shivam(1, 8); // this calls base class default constructor
    shivam.display();

    cout << endl;

    return 0;
}
/*
1. Public visibility mode: Pulbic members of the base class become Public members of the derived class.
2. Private visibility mode: Pulbic members of the base class become Private members of the derived class.
3. Default visibility mode is private
4. Private members are never inherited
5. It use the default constructor of base class
*/