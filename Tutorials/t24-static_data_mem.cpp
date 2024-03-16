#include <iostream>
using namespace std;
// static data members & methods
class Employee
{
    // all declartion are private if public not entitled
    int id;
    static int count;

public:
    void setData(void);
    void prtData(void);
    static void getCount(void)
    {
        cout << "Total employee registered - " << count << endl;
        // cout << id << endl; // throws an error
    }
};

int Employee::count; // this will help in counting for all objects // default value is zero

void Employee::setData(void)
{
    cout << "Employee " << count + 1 << endl;
    cout << "Enter your id" << endl;
    cin >> id;
    count++;
}

void Employee::prtData(void)
{
    cout << "Id number of Employee " << count << " is: " << id << endl;
    cout << endl;
}

int main()
{
    /***************** Static Data member *****************/

    Employee shivam, harry, akash;

    shivam.setData();
    shivam.prtData();

    harry.setData();
    harry.prtData();

    akash.setData();
    akash.prtData();

    cout << endl;
    Employee::getCount();
    cout << endl;

    return 0;
}