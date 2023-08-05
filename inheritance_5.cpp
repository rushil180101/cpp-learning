#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
public:
    int a, b;
    SimpleCalculator(int x, int y)
    {
        a = x;
        b = y;
    }
    int add() { return (a + b); }
    int sub() { return (a - b); }
    int mul() { return (a * b); }
    int div() { return (a / b); }
};

class ScientificCalculator: public SimpleCalculator
{
public:
    ScientificCalculator(int x, int y) : SimpleCalculator(x, y) {}
    float sin_cos()
    {
        return (sin(a) + cos(b));
    }
    float fdim_operation()
    {
        return fdim(a, b);
    }
    void display()
    {
        cout << "add             = " << add() << endl;
        cout << "sub             = " << sub() << endl;
        cout << "mul             = " << mul() << endl;
        cout << "div             = " << div() << endl;
        cout << "sin(a) + cos(b) = " << sin_cos() << endl;
        cout << "fdim(a, b)      = " << fdim_operation() << endl;
    }
};

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    ScientificCalculator scf1(7, 8);
    scf1.display();

    return 0;
}
