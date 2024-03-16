#include <iostream>
using namespace std;
// recursion & recursive function - it is slow than iterative method
int factorial(int n)
{
    int ans = 1;
    while (n > 1)
    {
        ans *= n * (n - 1);
        n = n - 2;
    }
    return ans;
}
int recFactorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * recFactorial(n - 1);
}

int Fibonacci(int n)
{
    if (n <= 1)
    {
        return 1;
    }
}
int recFibonacci(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return recFibonacci(n - 2) + recFibonacci(n - 1);
}

int main()
{
    int n = 9;
    cout << "Enter the number you want the factorial of :" << endl;
    cin >> n;
    cout << endl;

    /***************** Iterative *****************/
    
    cout << "Factorial of " << n << " is : " << factorial(n) << endl;
    cout << endl;

    /***************** Recursive *****************/

    cout << "Factorial of " << n << " is : " << recFactorial(n) << endl;
    cout << "Fibonacci at number " << n << " is : " << recFibonacci(n) << endl;
    cout << endl;

    return 0;
}