#include <iostream>
using namespace std;
// Initialization list in constructor
/*
Syntax for initialization list in constructor
constructor (argument-list) : initialization-section
{
    assignment + code;
}
*/
class num
{
private:
    int a, b;

protected:
public:
    num(int i, int j) : a(i), b(j)
    // num(int i, int j) : a(i), b(a + j)
    // num(int i, int j) : b(j), a(i + b) // this will give garbage value to 'a' bcz 'a' will be initialized first
    {
        cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
    }
    ~num();
};

num::~num()
{
}

int main()
{
    /***************** Initializing variables instantly *****************/

    num t(3, 6);

    cout << endl;
    return 0;
}
