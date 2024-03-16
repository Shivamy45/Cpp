#include <iostream>
using namespace std;
// Inline function, default arguments, Constatnt Arugments
inline int product(int a, int b) // Inline - It copies the function code on place of function
{
    return a * b;
}
/*
don't use inline function in loops, static or huge codes
*/
float credit(int savings, float factor = 1.04) // default arguments: we can change already assigned value or not if wanted
{
    return savings * factor;
}

int lengthOfString(const char *p)
{
    // 'const' is used so that function cannot change the value
    int i = 0;
    do
    {
        i++;
    } while (p[i] != '\0');
    cout << i << endl;
    return 0;
}

int main()
{
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;

    /***************** Inline function *****************/

    cout << "a * b is " << product(a, b) << endl;
    cout << "a * b is " << product(a, b) << endl;
    cout << "a * b is " << product(a, b) << endl;
    cout << endl;

    /***************** Default arguments *****************/

    int money = 10000;
    cout << "If you have Rs" << money << " in your bank account, you will recieve Rs" << credit(money) << " after 1 year" << endl;
    cout << "If you have Rs" << money << " in your VIP bank account, you will recieve Rs" << credit(money, 1.1) << " after 1 year" << endl;
    cout << endl;

    /***************** Constant arguments *****************/

    char str[10] = "Shivam";
    lengthOfString(str);
    cout << endl;

    return 0;
}