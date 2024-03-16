#include <iostream>
#include <vector>
using namespace std;
// Vector in STP
// CPP reference website to get the function
template <class T>
void display(vector<T> &v)
{
    cout << "Displaying the vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    cout << endl;
    // cout << v.at(4) << endl;
}

int main()
{
    vector<int> vec;

    int element, size;
    // cout << "Vector size: ";
    // cin >> size;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an elemnt to add this to vec[" << i + 1 << "]" << endl;
    //     cin >> element;
    //     vec.push_back(element);
    // }

    // vec.pop_back();

    // vector<int>::iterator iter = vec.begin();
    // vec.insert(iter, 53);
    // vec.insert(iter + 2, 2, 53);

    // display(vec);

    /***************** Ways to create vector *****************/

    vector<int> vec1; // zero length integer vector

    vector<char> vec2(4); // 4-element character vector
    vec2.push_back('a');

    vector<char> vec3(vec2); // 4-element character vector from vec2

    vector<int> vec4(5, 3); // 5-element vector of 3s
    // vector<int>::iterator iter = vec4.begin();
    // vec4.insert(iter + 2, 9);

    display(vec4);

    cout << endl;
    return 0;
}