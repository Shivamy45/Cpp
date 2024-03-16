#include <iostream>
using namespace std;
// Arrays
int main()
{
    /***************** Arrays *****************/
    
    int marks[5] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Enter the marks of studnet " << i + 1 << endl;
    //     cin >> marks[i];
    // }
    cout << endl;
    // marks[2] = 2; // we can change the value of arrays
    cout << "Using for loop" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << " marks: " << marks[i] << endl;
    }
    cout << endl;

    /***************** Quick quiz : do the same using while and do-while loops? *****************/
    /*
    int i = 0;
    cout <<"Using while loop" << endl;
    while (i < 5)
    {
        cout << "Student " << i + 1 << " marks: " << marks[i] << endl;
        i++;
    }
    cout << endl;
    i = 0;
    cout <<"Using do-while loop" << endl;
    do
    {
        cout << "Student" << i + 1 << " marks: " << marks[i] << endl;
        i++;
    } while (i < 5);
    cout << endl;
    */

    /***************** pointer and arrays *****************/
    int *p = marks;
    cout << "Changing " << *(p + 2) << " --> 10" << endl;
    *(p + 2) = 10; // we can change the values like this
    cout << endl;

    /* avoid using p++ or p-- anything like that earlier bcz it effects the order  */
    cout <<*(p++) << endl;
    *(p--); // to equalise the effect of p++
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "The value of marks[" << i << "] is : " << *p << endl;
        p++;
    }
    cout << endl;

    return 0;
}