#include <iostream>
using namespace std;
// Structure, Unions, typedef & Enums
typedef struct limited
{
    int id;
    int marks;
    float salary;
} ltd;

typedef union property
{
    int tax;
    int account;
} pty;

int main()
{
    /***************** Struct *****************/

    ltd shivam, harry;
    shivam.id = 1;
    shivam.marks = 68;
    shivam.salary = 5, 00, 000;
    cout << "CEO's id is : " << shivam.id << endl;
    cout << "12th percentage : " << shivam.marks << "%" << endl;
    cout << "Salary : Rs" << shivam.salary << endl;
    cout << endl;

    /***************** Union *****************/

    // only one to use & others same_type var will get the same value
    pty m1;
    m1.tax = 8460;
    m1.account = 400000;
    // the last one will be used.
    cout << "Tax paid : " << m1.tax << endl;
    cout << "Money in accounts : " << m1.account << endl;
    cout << endl;

    /***************** Enum *****************/

    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    meal ml1 = lunch;
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    // To print 0 if false and 1 if true
    cout << (ml1 == 2) << endl;
    cout << (ml1 == 1) << endl;
    cout << endl;

    return 0;
}