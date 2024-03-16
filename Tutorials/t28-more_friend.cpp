#include <iostream>
using namespace std;
// More Friend functions
class Y;

class X
{
private:
    int data;
    friend void add(X, Y);

public:
    void setData(int value)
    {
        data = value;
    }
};

class Y
{
private:
    int num;
    friend void add(X, Y);

public:
    void setData(int value)
    {
        num = value;
    }
};

void add(X o1, Y o2)
{
    cout << "Adding datas of X and Y objects gives me: " << o1.data + o2.num << endl;
}

class c2;
class c1
{
private:
    int val;
    friend void swap(c1 &, c2 &);

public:
    void inData(int a)
    {
        val = a;
    }
    void prtData()
    {
        cout << "this is current value of 'val': " << val << endl;
    }
};
class c2
{
private:
    int val2;
    friend void swap(c1 &, c2 &);

public:
    void inData(int a)
    {
        val2 = a;
    }
    void prtData()
    {
        cout << "this is current value of 'val2': " << val2 << endl;
    }
};

void swap(c1 &a, c2 &b)
{
    int temp = a.val;
    a.val = b.val2;
    b.val2 = temp;
}

int main()
{
    /***************** Example 1 *****************/

    X a;
    a.setData(1);

    Y b;
    b.setData(2);

    add(a, b);

    /***************** Example 2 *****************/

    c1 v;
    v.inData(2);
    v.prtData();

    c2 w;
    w.inData(4);
    w.prtData();

    swap(v, w);
    cout << endl;
    cout << "After swapping the values" << endl;
    cout << endl;
    v.prtData();
    w.prtData();
    cout << endl;

    return 0;
}