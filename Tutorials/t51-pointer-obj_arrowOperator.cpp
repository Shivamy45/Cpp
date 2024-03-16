#include <iostream>
using namespace std;
// Pointers to object and arrow operators
class Complex
{
private:
    int real, imaginary;

protected:
public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void prtData()
    {
        cout << "" << real << " + " << imaginary << "i" << endl;
        cout << "Real part is: " << real << endl;
        cout << "Imaginary part is: " << imaginary << endl;
        cout << endl;
    }
    ~Complex();
};

Complex::~Complex()
{
}

int main()
{
    Complex c;
    c.setData(1, 3);
    c.prtData();

    /***************** Pointer to object *****************/

    // this can be done in both ways
    // Complex *ptr = &c; // 1st way
    Complex *ptr = new Complex; // 2nd way
    (*ptr).setData(4, 2);
    (*ptr).prtData();

    /***************** Arrow operator *****************/

    ptr->setData(8, 7);
    ptr->prtData();

    /***************** Array of objects *****************/

    Complex *p = new Complex[2];
    p->setData(1, 2);
    p->prtData();

    (p + 1)->setData(3, 4);
    (p + 1)->prtData();

    cout << endl;
    return 0;
}