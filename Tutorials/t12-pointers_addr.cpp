#include <iostream>
using namespace std;
// Pointers & addresses
int main()
{
    int a = 5;
    int *ptr = &a;

    /***************** & --> Address of operator *****************/

    cout << "Address of a is : " << &a << endl;
    cout << "address pointing ptr is : " << ptr << endl;
    cout << endl;

    /***************** * --> Dereference *****************/

    cout << "Value at the address pointed by ptr is : " << *ptr << endl;
    cout << endl;

    /***************** Pointer to pointer *****************/

    int **ptr2 = &ptr;
    cout << "Address of ptr is : " << ptr2 << endl;
    cout << "Value of ptr is : " << *ptr2 << endl;
    cout << "Value in ptr is : " << **ptr2 << endl;
    cout << endl;

    return 0;
}