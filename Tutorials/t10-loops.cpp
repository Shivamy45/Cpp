#include <iostream>
using namespace std;
// loops
int main()
{
    /*
    1. For loop
    2. While
    3. Do while
    */

    /***************** For loop *****************/

    for (int i = 1; i < 6; i++)
    {
        cout << i << endl;
    }
    cout << "for loop ended" << endl;
    cout << endl;

    /***************** While loop *****************/

    int i = 1;
    while (i < 6)
    {
        cout << i << endl;
        i++;
    }
    cout << "While loop ended" << endl;
    cout << endl;

    /***************** do while loop *****************/
    
    i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i < 6);
    cout << "Do while loop ended" << endl;
    cout << endl;

    /***************** infinite loops *****************/

    // for (int j = 1; 1 < 2; j++)
    // {
    //     cout << j << endl;
    // }
    // cout << endl;

    // int j = 1;
    // while (true)
    // {
    //     cout << j << endl;
    //     j++;
    // }
    // cout << endl;

    // j = 1;
    // do
    // {
    //     cout << j << endl;
    // } while (true);
    // cout << endl;

    return 0;
}