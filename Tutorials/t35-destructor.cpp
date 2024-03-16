#include <iostream>
using namespace std;
// Destructor - never takes an argument nor does it return any value
int count = 0;
class des
{
private:
public:
    des();
    ~des();
};

des::des()
{
    count++;
    cout << "Constructor for object " << count << endl;
    cout << endl;
}
des::~des()
{
    cout << "Destructor for object " << count << endl;
    count--;
    cout << endl;
}

int main()
{
    cout << "Inside main function" << endl;
    cout << "Creating objects 1" << endl;
    cout << endl;
    des n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating 2 more objects" << endl;
        cout << endl;
        des n2, n3;
        cout << "Exit this block" << endl;
        cout << endl;
    }
    cout << "Back to main" << endl;
    cout << "Code end" << endl;
    cout << endl;

    return 0;
}