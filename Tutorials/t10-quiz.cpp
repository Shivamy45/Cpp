#include <iostream>
using namespace std;
// multiplication table
int main()
{
    int num;
    cout << "Enter the number you want table of :" << endl;
    cin >> num;
    cout << "Table of " << num << endl;
    for (int i = 1; i < 11; i++)
    {
        cout << "" << num << " x "<<i<<" = " << num * i << "" << endl;
    }
    cout << endl;

    return 0;
}