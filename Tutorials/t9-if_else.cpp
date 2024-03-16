#include <iostream>
using namespace std;
// Control Structure, If Else & Switch-case Statements
int main()
{
    /*
    1. Sequence structure - line by line code
    2. Selection structure - different instruction for differnet condition
    3. Loop structure - loop continues until gets false
    */
    int age;
    cout << "Enter your age:" << endl;
    cin >> age;
    cout << endl;

    /***************** if else ladder *****************/

    if (age > 40)
    {
        cout << "You are too old" << endl;
    }
    else if (age >= 18)
    {
        cout << "You are welcomed in adults party" << endl;
    }
    else if (age > 10)
    {
        cout << "You are welcomed in children's party" << endl;
    }
    else
    {
        cout << "Kids not allowed" << endl;
    }
    cout << endl;

    /***************** switch case statements *****************/
    
    switch (age)
    {
    case 18:
        cout << "You are just 18" << endl;
        break;

    default:
        cout << "Another age entered" << endl;
        break;
    }
    cout << endl;

    return 0;
}