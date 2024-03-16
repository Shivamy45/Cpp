#include <iostream>
#include <fstream>
using namespace std;
// File I/O
int main()
{
    // connecting our file with out stream
    ofstream out("t61.txt");
    // connecting a name string and filling it with the string entered by user
    string name;
    cout << "Enter your name" << endl;
    cin >> name;
    
    // writing a string to the file
    out << "My name is " + name;


    out.close(); // to close the writing link - use this to read it afteron

    ifstream in("t61.txt");
    string text;
    getline(in, text);
    cout << text << endl;
    
    cout << endl;
    return 0;
}