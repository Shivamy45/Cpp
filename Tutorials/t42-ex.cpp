#include <iostream>
#include <cmath>
using namespace std;
// exercise
class Simple_Calculator
{
private:
    int a, b;

public:
    void getData_Simple();
    void simple_calculate();
    ~Simple_Calculator();
};

void Simple_Calculator::getData_Simple()
{
    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;
}
void Simple_Calculator::simple_calculate()
{
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
}
Simple_Calculator::~Simple_Calculator()
{
}

class Scientific_Calulator
{
private:
    int x;

public:
    void getData_Scientific();
    void scientific_calculate();
    ~Scientific_Calulator();
};

void Scientific_Calulator::getData_Scientific()
{
    cout << "Enter x" << endl;
    cin >> x;
}
void Scientific_Calulator::scientific_calculate()
{
    cout << "sin(x) is " << sin(x) << endl;
    cout << "cos(x) is " << cos(x) << endl;
    cout << "tan(x) is " << tan(x) << endl;
    cout << "exp(x) is " << exp(x) << endl;
}
Scientific_Calulator::~Scientific_Calulator()
{
}

class Hybrid_calculator : public Simple_Calculator, public Scientific_Calulator
{
public:
    ~Hybrid_calculator();
};

Hybrid_calculator::~Hybrid_calculator()
{
}

int main()
{
    Hybrid_calculator calc;

    calc.getData_Simple();
    calc.simple_calculate();

    calc.getData_Scientific();
    calc.scientific_calculate();

    cout << endl;

    return 0;
}