#include <iostream>
using namespace std;
// Multilevel Inheritance
// Base class
class students
{
private:
protected:
    int roll_no;

public:
    students() {}
    void get_roll_no(int a1);
    ~students();
};

void students::get_roll_no(int a1)
{
    roll_no = a1;
}
students::~students()
{
}
// first derived class - base class is "students"
class marks : public students
{
private:
protected:
    float physics;
    float maths;

public:
    void getMarks(float a2, float a3);
    ~marks();
};

void marks::getMarks(float a2, float a3)
{
    physics = a2;
    maths = a3;
}
marks::~marks()
{
}
// second derived class - base class is "marks"
class result : public marks
{
private:
protected:
    float percentage;

public:
    void calcData();
    ~result();
    void display();
};

void result::calcData()
{
    percentage = (physics + maths) / 2;
}
result::~result()
{
}
void result::display()
{
    cout << "Student " << roll_no << endl;
    cout << "Your physics and maths marks are " << physics << " and " << maths << " respectively" << endl;
    cout << "Your pecentage is " << percentage << "%" << endl;
}

int main()
{
    /***************** ||Inheritance Path|| A ---> B ---> C *****************/
    
    result s1;
    s1.get_roll_no(1);
    s1.getMarks(88.2, 73.6);
    s1.calcData();
    s1.display();

    cout << endl;
    return 0;
}