#include <iostream>
#include <string>
using namespace std;
// OOPs recap & Nesting of Member function
class binary
{
private:
    string s;

public:
    void input(void);
    void checkBinary(void);
    void prtBinary(void);
    void revBinary(void);
};

void binary ::input(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
    checkBinary(); // Nesting of member function - we can use the functions in a function without the knowledge of user
}

void binary ::checkBinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Error incorrect number - " << s.at(i) << endl;
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::prtBinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << "" << s.at(i) << " ";
    }
    cout << endl;
}

void binary ::revBinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

int main()
{
    binary b1;
    b1.input();
    // b1.checkBinary(); // this is nested in 'input' function
    b1.prtBinary();
    b1.revBinary();
    b1.prtBinary();
    cout << endl;

    return 0;
}