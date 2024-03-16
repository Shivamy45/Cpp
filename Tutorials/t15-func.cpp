#include <iostream>
using namespace std;
// functions & function prototypes

/***************** Functions *****************/

int sum(int a, int b); // this is function prototype - declaring function
// int sum(int, int);  // Acceptable
// int sum(int a, b);  // Not Acceptable
void g()
{
    cout << "Hello User" << endl;
}
int main()
{

    int num1, num2; // 'num1' and 'num2' are actual parameters
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;
    cout << "The sum is " << sum(num1, num2) << endl;
    g();

    return 0;
}
int sum(int a, int b) // defining function - 'a' and 'b' are formal parameters
{
    return a + b;
}