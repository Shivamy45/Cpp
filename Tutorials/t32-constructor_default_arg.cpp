#include <iostream>
using namespace std;
// Constructor default arguments
class simple
{
private:
    int d1;
    int d2;
    int d3;
public:
    simple(int a, int b, int c);
    void ptrData()
    {
        cout << "The values are " << d1 << ", " << d2 << " and " << d3 << "" << endl;
    }
};

simple::simple(int a, int b = 2, int c = 3)
{
    d1 = a;
    d2 = b;
    d3 = c;
}
int main()
{
    simple o1(7, 8);
    o1.ptrData();

    simple o2(1, 5, 4);
    o2.ptrData();

    simple o3(1);
    o3.ptrData();

    cout << endl;

    return 0;
}