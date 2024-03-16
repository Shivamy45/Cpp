#include <iostream>
#include <math.h>
using namespace std;
// Parameterized and default constructor
class complex
{
private:
    int a, b;

public:
    complex(int x, int y);
    void prtData()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex::complex(int x, int y) // Parameterized constructor
{
    a = x;
    b = y;
}

class point
{
private:
    int x, y;
    friend float distance(point, point);

public:
    point(int a, int b);
    void displayPoint()
    {
        cout << "The point is at (" << x << ", " << y << ")" << endl;
    }
};

point::point(int a, int b)
{
    x = a;
    y = b;
}

// quiz
float distance(point p1, point p2)
{
    return sqrt((pow((p2.x - p1.x), 2)) + (pow((p2.y - p1.y), 2)));
}

int main()
{
    /***************** Implicit call *****************/

    complex c1(9, 8);
    c1.prtData();

    /***************** Explicit call *****************/

    complex c2 = complex(3, 4);
    c2.prtData();

    /***************** Example 2 *****************/

    point p(1, 2);
    p.displayPoint();
    point q = point(1, 5);
    q.displayPoint();

    /***************** quiz *****************/

    float ans = distance(p, q);
    cout << "The distance between the points is " << ans << endl;

    cout << endl;

    return 0;
}