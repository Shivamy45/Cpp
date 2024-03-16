#include <iostream>
using namespace std;
// input and output
int main()
{
    /***************** "<<" Insertion operator *****************/

    cout << endl << "This is used to print.\n";
    int a, b;
    cout << "Enter the value of 'a'";
    cout << endl;

    /***************** ">>" Extraction operator *****************/
    cin >> a;
    cout << "Enter the value of 'b'\n";
    cin >> b;
    cout << "The sum of a and b is " << a + b;
    cout << endl;

    return 0;
}