#include <iostream>
#include <fstream>
using namespace std;
// Function template
template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = ((a + b) / 2);
    return avg;
}

template <class T3>
void swapNum(T3 &x, T3 &y)
{
    T3 temp = x;
    x = y;
    y = temp;
}

int main()
{
    float a;
    a = funcAverage(2, 3.8);
    cout << a << endl;
    a = funcAverage(10.2, 8.4);
    cout << a << endl;

    int x = 5, y = 7;
    swapNum(x, y);
    cout << x << "\t" << y << endl;

    cout << endl;
    return 0;
}