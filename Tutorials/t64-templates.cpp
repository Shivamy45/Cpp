#include <iostream>
#include <fstream>
using namespace std;
// Templates
template <class T>
class vector
{
    int size;

public:
    T *arr;
    vector(int s)
    {
        size = s;
        arr = new T[size];
    }
    int dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        cout << d << endl;
    }
};

int main()
{
    /***************** Using Template to use different var_type *****************/

    vector<int> v1(3);
    v1.arr[0] = 5;
    v1.arr[1] = 4;
    v1.arr[2] = 9;

    vector<int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 2;
    v2.arr[2] = 3;

    v1.dotProduct(v2);

    vector<float> v3(3);
    v3.arr[0] = 5.5;
    v3.arr[1] = 4.3;
    v3.arr[2] = 9.1;

    vector<float> v4(3);
    v4.arr[0] = 1.6;
    v4.arr[1] = 2.4;
    v4.arr[2] = 3.9;

    v3.dotProduct(v4);

    cout << endl;
    return 0;
}