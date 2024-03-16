#include <iostream>
using namespace std;
#define pie 3.14
// function overloading
int sum(int a, int b)
{
    cout << "Function with 2 arguments" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "Function with 3 arguments" << endl;
    return a + b + c;
}
float volumeOfCylinder(int r, int h)
{
    return pie * r * r * h;
}
int volumeOfCube(int a)
{
    return a * a * a;
}
float volumeOfPyramid(int r, int h)
{
    return (pie * r * r * h)/3;
}

int main()
{
    cout << "Sum of 3 and 6 is " << sum(3, 6) << endl;
    cout << "Sum of 4, 5 and 9 is " << sum(4, 5, 9) << endl;
    cout << endl;

    /***************** Volumes *****************/

    cout << "Volume of cylinder of r = 3 and h = 5 is " << volumeOfCylinder(3, 5) << endl;
    cout << "Volume of cube of a = 6 is " << volumeOfCube(6) << endl;
    cout << "Volume of pyramid of r = 5 and h = 4 is " << volumeOfPyramid(5, 4) << endl;
    cout << endl;

    return 0;
}