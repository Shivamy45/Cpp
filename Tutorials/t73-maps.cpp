#include <iostream>
#include <fstream>
#include <map>
using namespace std;
// Maps
int main()
{
    map<string, int> marksMap;
    marksMap["shivam"] = 49;
    marksMap["satyam"] = 41;
    marksMap["harry"] = 39;

    map<string,int> ::iterator iter;
    
    for (iter = marksMap.begin(); iter!= marksMap.end(); iter++)
    {
        cout << (*iter).first<<": "<< (*iter).second << endl;
    }
    
    marksMap.insert({{"divyam" , 22}, {"ayush", 34}});
    cout << endl;
    cout << "The size is: "<< marksMap.size() << endl;
    cout << "The max size is: "<< marksMap.max_size() << endl;
    cout << "Empty is true/false: "<< marksMap.empty() << endl;

    for (iter = marksMap.begin(); iter!= marksMap.end(); iter++)
    {
        cout << (*iter).first<<": "<< (*iter).second << endl;
    }

    cout << endl;
    return 0;
}