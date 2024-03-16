#include <iostream>
using namespace std;
// Array of objects using pointer
class Shop_Item
{
private:
    int eId;
    float price;

public:
    void setData(int a, float b)
    {
        eId = a;
        price = b;
    }
    void getData()
    {
        cout << "Price of item " << eId << " is " << price << endl;
    }
};

int main()
{
    Shop_Item *ptr = new Shop_Item[3];
    Shop_Item *ptrTemp = ptr; // bcz after 1st loop ptr will be at last memory and cannot restart from 0
    int p;
    float q;
    for (int i = 0; i < 3; i++, ptr++)
    {
        cout << "Enter eId and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
    }

    for (int i = 0; i < 3; i++, ptrTemp++)
    {
        ptrTemp->getData();
    }

    cout << endl;
    return 0;
}