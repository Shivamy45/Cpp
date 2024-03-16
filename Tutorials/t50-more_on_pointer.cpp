#include <iostream>
using namespace std;
// More on Pointer
int main()
{
    /***************** Basic pointer *****************/

    int a = 3;
    int *ptr;
    ptr = (int *)malloc(1 * sizeof(int));
    ptr = &a;
    cout << *ptr << endl;
    cout << ptr << endl;

    /***************** New Operator *****************/

    int *p1 = new int(5);
    float *p2 = new float(5);

    int *arr = new int[3]; // this creates an array
    for (int i = 0; i < 3; i++)
    {
        arr[i] = (i + 1) * 10;
    }
    cout << "Value at arr[0]: " << arr[0] << endl;
    cout << "Value at arr[1]: " << arr[1] << endl;
    cout << "Value at arr[2]: " << arr[2] << endl;

    /***************** Delete Operator *****************/

    delete[] arr; // same as free in C
    cout << endl;
    cout << "Value at arr[0]: " << arr[0] << endl;
    cout << "Value at arr[1]: " << arr[1] << endl;
    cout << "Value at arr[2]: " << arr[2] << endl;

    cout << endl;
    return 0;
}