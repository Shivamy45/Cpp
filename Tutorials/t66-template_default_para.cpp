#include <iostream>
#include <fstream>
using namespace std;
// templete with default parameter
template <class T1 = int, class T2 = float, class T3 = char>
class CWS
{

public:
    T1 a;
    T2 b;
    T3 c;
    CWS(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << a << "\t" << b << "\t" << c << endl;
    }
};

int main()
{
    /***************** Using default parameters *****************/

    CWS<> s1(1, 2.2, 'a');
    s1.display();

    /***************** Changing default parameters *****************/

    CWS<char, int, float> s2('c', 2, 4.1);
    s2.display();

    cout << endl;
    return 0;
}