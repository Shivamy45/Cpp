#include <iostream>
using namespace std;
// Object Oriented Programming Style - OOPs
class Student
{
private:
    int id, bus; // these datas can only defined by a funct present inside the class
public:
    int num, rank; // this can be defined later
    void setData(int id1, int bus1);
    void prtData()
    {
        cout << "Your id is: " << id << endl;
        cout << "Your bus number is: " << bus << endl;
        cout << "Your total marks are: " << num << endl;
        cout << "Your class rank is: " << rank << endl;
    }
};
void Student::setData(int id1, int bus1)
{
    id = id1;
    bus = bus1;
}

int main()
{
    /***************** Classes *****************/

    Student shivam;
    shivam.setData(7, 9); // these are private variables
    shivam.num = 455;     // these are public variables
    shivam.rank = 3;
    shivam.prtData();
    cout << endl;

    return 0;
}