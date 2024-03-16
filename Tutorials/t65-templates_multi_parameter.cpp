#include <iostream>
#include <fstream>
using namespace std;
// Template with multiple parameters
template <class T1, class T2>
class temp
{

public:
    T1 data1;
    T2 data2;
    temp(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << data1 << "\t" << data2 << endl;
    }
};

int main()
{
    temp<char, float> obj1('a', 2.4);
    obj1.display();
    temp<int, string> obj2(1, "shivam");
    obj2.display();

    cout << endl;
    return 0;
}