#include <iostream>
#include <fstream>
using namespace std;
// File I/O - open() and eof() function
int main()
{
    /***************** Open() function *****************/

    ofstream out;
    out.open("t62.txt");
    out << "This is me.\n";
    out << "This is 2 me.\n";

    out.close();

    ifstream in;
    in.open("t62.txt");
    string st;

    /***************** eof - end of file *****************/

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }

    in.close();

    cout << endl;
    return 0;
}