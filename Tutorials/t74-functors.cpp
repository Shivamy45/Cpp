#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
// Functors (Function Objects)
int main()
{
    int arr[] = {1, 4, 88, 20, 99, 102, 2};
    sort(arr, arr + 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;

    sort(arr, arr + 7, greater<int>());
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }

    cout << endl;
    return 0;
}
// Function Object: function wrapped in a class so that it is available like an object