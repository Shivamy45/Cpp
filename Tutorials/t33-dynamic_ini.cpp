#include <iostream>
#include <math.h>
using namespace std;
// dynamic initialization of object using constructors
class compInterest
{
private:
    int principal;
    int years;
    float interest;
    float returnValue;

public:
    compInterest() {}
    compInterest(int p, int t, double r);
    compInterest(int p, int t, int r);
    void prtReturnValue()
    {
        cout << "Principal amount was " << principal << "." << endl
             << "Your total return is " << returnValue << endl;
        cout << endl;
    }
};

compInterest::compInterest(int p, int t, double r)
{
    principal = p;
    years = t;
    interest = r;

    returnValue = principal;
    returnValue *= pow((1 + interest), years);
}
compInterest::compInterest(int p, int t, int r)
{
    principal = p;
    years = t;
    interest = (float)r / 100;

    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue *= (1 + interest);
    }
}

int main()
{
    compInterest me(100, 2, 0.04);
    me.prtReturnValue();

    compInterest sec_me(100, 2, 2);
    sec_me.prtReturnValue();

    compInterest null;
    null.prtReturnValue();
    cout << endl;

    return 0;
}