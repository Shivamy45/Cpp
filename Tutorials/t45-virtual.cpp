#include <iostream>
using namespace std;
// Virtual Base Class
class Students
{
private:
protected:
    int id;

public:
    void getId();
    ~Students();
};
void Students::getId()
{
    cout << "Enter your Id" << endl;
    cin >> id;
}
Students::~Students()
{
}

class Test : virtual public Students
{
private:
protected:
    int marks;

public:
    void getMarks();
    ~Test();
};
void Test::getMarks()
{
    cout << "Enter your test marks(out of 10)" << endl;
    cin >> marks;
}
Test::~Test()
{
}

class Sports : public virtual Students
{
private:
protected:
    int score;

public:
    void getScore();
    ~Sports();
};
void Sports::getScore()
{
    cout << "Enter your sports score(out of 10)" << endl;
    cin >> score;
}
Sports::~Sports()
{
}

class Result : public Test, public Sports
{
private:
protected:
public:
    void showResult();
    ~Result();
};
void Result::showResult()
{
    cout << "Student " << id << " result is " << (marks + score) / 2 << "/10" << endl;
}
Result::~Result()
{
}

int main()
{
    /***************** Example of Virtal Base Class *****************/

    Result s1;
    s1.getId();
    s1.getMarks();
    s1.getScore();
    s1.showResult();

    cout << endl;
    return 0;
}