#include <iostream>
#include <fstream>
using namespace std;
// Member Function Templates & overloading Template Functions
template <class T>
class CWS
{

public:
    T data;
    CWS(T a)
    {
        data = a;
    }
    void display();
};
/***************** Member Function Template *****************/
template <class T>
void CWS<T>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "This is func(" << a << ")" << endl;
}
template <class T1>
void func(T1 a)
{
    cout << "This is templatised func(" << a << ")" << endl;
}

int main()
{
    CWS<int> s(3);
    s.display();
    CWS<char> s2('a');
    s2.display();

    func(4); // Exact match takes the highest priority
    func(4.2); // this will run templatised bcz input is not 'int'
    func('a'); // so templatised will get priority
    func("shivam");

    cout << endl;
    return 0;
}