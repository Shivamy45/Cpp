#include <iostream>
using namespace std;
// Call by value or reference
int swap(int *a, int *b) // pointer reference
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int &swapReferenceVar(int &a, int &b) // reference variable - '&'
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;
    cout << endl;
    swap(a, b); // Using pointer reference
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;
    cout << endl;
    swapReferenceVar(a, b); // Using referecnce varaibles
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;

    return 0;
}