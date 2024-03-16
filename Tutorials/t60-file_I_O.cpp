#include <iostream>
#include <fstream>
using namespace std;
// File I/O
int main()
{
    /***************** Write operation *****************/

    /* Opening files using constructor and writing it */

    string st = "This is t60 text";
    // ofstream out("t60.txt");
    // out << st;

    /***************** Reading operation *****************/

    /* Opening files using constructor and reading it */

    string st2;
    ifstream in("t60.txt");
    in >> st2; // to get word by word
    cout << st2 << endl;
    // getline(in, st2); // to get whole line
    // cout << st2 << endl;
    

    cout << endl;
    return 0;
}
/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived form fstreambase
3. ofstream --> derived form fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
1. Using the constructor
2. Using the member function open() of the class
*/