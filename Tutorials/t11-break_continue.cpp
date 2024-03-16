#include <iostream>
using namespace std;
// Break and Continue
int main()
{
    /***************** Break *****************/

    for (int i = 0; i < 4; i++)
    {
        cout << i << endl;
        if (i == 2)
        {
            break;
        }
        cout << "This is printed later" << endl;
    }
    cout << endl;

    /***************** Continue *****************/
    
    for (int i = 0; i < 4; i++)
    {
        cout << i << endl;
        if (i == 2)
        {
            continue;
        }
        cout << "Contined" << endl;
    }
    cout << endl;

    return 0;
}