#include <iostream>
using namespace std;
// Memory Allocation & using Arrays in Classes
class shop
{
private:
    int itemId[20];
    int itemPrice[20];
    int noOfItems;
    int count;

public:
    void initCounter(void);
    void setPrice(void);
    void prtPrice(void);
};

void shop::initCounter(void)
{
    cout << "Enter number of items you want to register" << endl;
    cin >> noOfItems;
    count = 0;
}
void shop::setPrice(void)
{
    for (int i = 0; i < noOfItems; i++)
    {
        cout << "Enter Id of your item " << count + 1 << endl;
        cin >> itemId[count];
        cout << "Enter price of your item " << count + 1 << endl;
        cin >> itemPrice[count];
        count++;
    }
}
void shop::prtPrice(void)
{
    for (int i = 0; i < count; i++)
    {
        cout << "Item id:" << itemId[i] << endl;
        cout << "Price:" << itemPrice[i] << endl;
        cout << endl;
    }
}

int main()
{
    /***************** Using arrays in class *****************/

    shop kirana;
    kirana.initCounter();
    kirana.setPrice();
    kirana.prtPrice();

    return 0;
}